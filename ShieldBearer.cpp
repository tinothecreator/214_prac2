#include "ShieldBearer.h"


ShieldBearer::ShieldBearer() : Soldier(), healthPerSoldier(0), damagePerSoldier(0), defencePerSoldier(0), amountOfSoldiersPerUnit(0), unitName("default") {}

ShieldBearer::ShieldBearer(int int_healthPersoldier, int int_damagePerSoldier, int int_defencePerSoldier, int int_amountOfSoldiersPerUnit, const std::string& string_unitName)
    : Soldier(int_healthPersoldier, int_damagePerSoldier, int_defencePerSoldier, int_amountOfSoldiersPerUnit, string_unitName), healthPerSoldier(int_healthPersoldier), damagePerSoldier(int_damagePerSoldier), defencePerSoldier(int_defencePerSoldier), amountOfSoldiersPerUnit(int_amountOfSoldiersPerUnit), unitName(string_unitName) {}

ShieldBearer::ShieldBearer(const ShieldBearer& other)
    : Soldier(other), healthPerSoldier(other.healthPerSoldier), damagePerSoldier(other.damagePerSoldier), defencePerSoldier(other.defencePerSoldier), amountOfSoldiersPerUnit(other.amountOfSoldiersPerUnit), unitName(other.unitName) {}




Soldier* ShieldBearer::clonis() {
	return new ShieldBearer(*this);
}

void ShieldBearer::engage() {
	// implemented in Soldier.cpp
}

void ShieldBearer::disengage() {
	// implemented in Soldier.cpp
}

void ShieldBearer::prepare() {
	// std::cout << "ShieldBearer unit: " << unitName << "is preparing for battle." << std::endl;
	// std::cout << "ShieldBearers are tightening shield grips and preparing defense formations." << std::endl;

	std::cout << "ShieldBearers are forming a shield wall." << std::endl;

    int formationWidth = amountOfSoldiersPerUnit / 10;  // Assume 10 soldiers per line
    for (int i = 0; i < 3; ++i) {  // Three rows of shield bearers
        for (int j = 0; j < formationWidth; ++j) {
            std::cout << "[|] ";  // Shields represented by brackets and a vertical line
        }
        std::cout << std::endl;
    }

}

void ShieldBearer::execute() {
	// std::cout << "ShieldBearers are advancing slowly, protecting the front lines with their shields." << std::endl;

	std::cout << "ShieldBearers are holding the line!" << std::endl;

    int formationWidth = amountOfSoldiersPerUnit / 10;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < formationWidth; ++j) {
            std::cout << "[|] ";  // Shields up
        }
        std::cout << std::endl;
    }

}

void ShieldBearer::retreat() {
	// std::cout << "ShieldBearers are retreating cautiously, keeping shields up to protect the rear." << std::endl;

	std::cout << "ShieldBearers are retreating with shields raised!" << std::endl;

    int formationWidth = amountOfSoldiersPerUnit / 10;
    for (int i = 3; i > 0; --i) {  // Gradually reduce the number of rows
        for (int j = 0; j < formationWidth; ++j) {
            std::cout << "[|] ";
        }
        std::cout << std::endl;
    }

}

void ShieldBearer::rest() {
	// std::cout << "ShieldBearers are resting, ensuring shields and armor are intact." << std::endl;

	std::cout << "ShieldBearers are resting and repairing their shields." << std::endl;

    for (int i = 0; i < amountOfSoldiersPerUnit / 10; ++i) {
        std::cout << "[ ] ";  // Shields laid down
    }
    std::cout << std::endl;
}

Memento* ShieldBearer::militusMemento() {
	Memento* mem = new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);
    return mem;
}

void ShieldBearer::vivificaMemento(Memento* mem) {
	if (mem) {
        healthPerSoldier = mem->getHealth();
        damagePerSoldier = mem->getDamage();
        defencePerSoldier = mem->getDefence();
        amountOfSoldiersPerUnit = mem->getAmountOfSoldiers();
        unitName = mem->getUnitName();
	}
}


ShieldBearer::~ShieldBearer() {
    // Cleanup if necessary
    std::cout << "ShieldBearer unit " << unitName << " is being destroyed." << std::endl;
}
