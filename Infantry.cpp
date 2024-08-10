#include "Infantry.h"

Infantry::Infantry() : Soldier(), healthPerSoldier(0), damagePerSoldier(0), defencePerSoldier(0), amountOfSoldiersPerUnit(0), unitName("default") {}

Infantry::Infantry(int int_healthPersoldier, int int_damagePerSoldier, int int_defencePerSoldier, int int_amountOfSoldiersPerUnit, const std::string& string_unitName)
    : Soldier(int_healthPersoldier, int_damagePerSoldier, int_defencePerSoldier, int_amountOfSoldiersPerUnit, string_unitName), healthPerSoldier(int_healthPersoldier), damagePerSoldier(int_damagePerSoldier), defencePerSoldier(int_defencePerSoldier), amountOfSoldiersPerUnit(int_amountOfSoldiersPerUnit), unitName(string_unitName) {}

Infantry::Infantry(const Infantry& other)
    : Soldier(other), healthPerSoldier(other.healthPerSoldier), damagePerSoldier(other.damagePerSoldier), defencePerSoldier(other.defencePerSoldier), amountOfSoldiersPerUnit(other.amountOfSoldiersPerUnit), unitName(other.unitName) {}



Soldier* Infantry::clonis() {
	return new Infantry(*this);
}

void Infantry::prepare() {
	// std::cout << "Infantry unit: " << unitName << " is preparing for battle." << std::endl;
	// std::cout << "Infantry is checking armor and weapons, forming ranks, and boosting morale." << std::endl;

	std::cout << "Infantry is preparing for battle with a square formation." << std::endl;
    
    //int formationSize = sqrt(amountOfSoldiersPerUnit); // Square root for a square formation
    //we cant use sqrt , that needs the math library
    int formationSize = (amountOfSoldiersPerUnit)/2;
    for (int i = 0; i < formationSize; ++i) {
        for (int j = 0; j < formationSize; ++j) {
            std::cout << "* ";  // Printing stars to represent soldiers
        }
        std::cout << std::endl;
    }
}

void Infantry::execute() {
	// std::cout << "Infantry is charging forward with swords drawn!" << std::endl;

	std::cout << "Infantry is charging forward!" << std::endl;
    
    for (int i = 0; i < amountOfSoldiersPerUnit; ++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << " ";  // Indent to simulate forward movement
        }
        std::cout << "*\n";  // Each soldier moves forward
    }
}

void Infantry::retreat() {
	// std::cout << "Infantry is falling back in a controlled retreat, maintaining formation." << std::endl;

	std::cout << "Infantry is retreating in an orderly manner." << std::endl;
    
    for (int i = amountOfSoldiersPerUnit / 2; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void Infantry::rest() {
	// std::cout << "Infantry is resting, tending to wounds, and preparing for the next battle." << std::endl;

	std::cout << "Infantry is resting and regrouping." << std::endl;
    
    int groupSize = amountOfSoldiersPerUnit / 4;  // Divide into smaller groups
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < groupSize; ++j) {
            std::cout << "* ";
        }
        std::cout << "  Resting group " << (i + 1) << std::endl;
    }
}

Memento* Infantry::militusMemento() {
	Memento* mem = new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);
    return mem;
}

void Infantry::vivificaMemento(Memento* mem) {
	if (mem) {
        healthPerSoldier = mem->getHealth();
        damagePerSoldier = mem->getDamage();
        defencePerSoldier = mem->getDefence();
        amountOfSoldiersPerUnit = mem->getAmountOfSoldiers();
        unitName = mem->getUnitName();
	}
}


Infantry::~Infantry() {
    // Cleanup if necessary
    std::cout << "Infantry unit " << unitName << " is being destroyed." << std::endl;
}

