#include "Boatman.h"

Boatman::Boatman() : Soldier(), healthPerSoldier(0), damagePerSoldier(0), defencePerSoldier(0), amountOfSoldiersPerUnit(0), unitName("default") {}

Boatman::Boatman(int int_healthPersoldier, int int_damagePerSoldier, int int_defencePerSoldier, int int_amountOfSoldiersPerUnit, const std::string& string_unitName)
    : Soldier(int_healthPersoldier, int_damagePerSoldier, int_defencePerSoldier, int_amountOfSoldiersPerUnit, string_unitName), healthPerSoldier(int_healthPersoldier), damagePerSoldier(int_damagePerSoldier), defencePerSoldier(int_defencePerSoldier), amountOfSoldiersPerUnit(int_amountOfSoldiersPerUnit), unitName(string_unitName) {}

Boatman::Boatman(const Boatman& other)
    : Soldier(other), healthPerSoldier(other.healthPerSoldier), damagePerSoldier(other.damagePerSoldier), defencePerSoldier(other.defencePerSoldier), amountOfSoldiersPerUnit(other.amountOfSoldiersPerUnit), unitName(other.unitName) {}





Soldier* Boatman::clonis() {
	return new Boatman(*this);
}



void Boatman::prepare() {
	// std::cout << "Boatman unit: " << unitName << " is preparing for battle." << std::endl;
	// std::cout << "Boatmen are inspecting their boats, checking oars, and preparing for a swift river crossing." << std::endl;

	std::cout << "Boatmen are preparing the boats in a line formation." << std::endl;

    int boatCount = amountOfSoldiersPerUnit / 10;  // Assume 10 boatmen per boat
    for (int i = 0; i < boatCount; ++i) {
        std::cout << "  ~~~~~~~~  " << std::endl;  // Waves around the boat
        std::cout << " [Boat #" << (i + 1) << "]" << std::endl;
        std::cout << "  ~~~~~~~~  " << std::endl;
    }
}

void Boatman::execute() {
	// std::cout << "Boatmen are rowing across the river swiftly, navigating through enemy fire." << std::endl;

	std::cout << "Boatmen are rowing across the river!" << std::endl;

    for (int i = 0; i < 3; ++i) {  // Simulate rowing with repeated patterns
        std::cout << "  ~~~~~~~~  " << std::endl;
        std::cout << "  |  " << (i % 2 == 0 ? "/\\" : "\\/") << "  |  " << std::endl;  // Oars moving
        std::cout << "  [Boatman] " << std::endl;
        std::cout << "  ~~~~~~~~  " << std::endl;
    }
}

void Boatman::retreat() {
	// std::cout << "Boatmen are retreating by rowing back to the safety of their base." << std::endl; 

	std::cout << "Boatmen are retreating, rowing back to the shore!" << std::endl;

    for (int i = 0; i < 3; ++i) {  // Simulate rowing with reversed patterns
        std::cout << "  ~~~~~~~~  " << std::endl;
        std::cout << "  |  " << (i % 2 == 0 ? "\\/" : "/\\") << "  |  " << std::endl;  // Oars moving
        std::cout << "  [Boatman] " << std::endl;
        std::cout << "  ~~~~~~~~  " << std::endl;
    }
}

void Boatman::rest() {
	// std::cout << "Boatmen are resting, repairing boats, and preparing for the next mission." << std::endl;

	std::cout << "Boatmen are docking the boats and resting." << std::endl;

    std::cout << "  ~~~~~~~~  " << std::endl;
    std::cout << "  [Docked Boat]" << std::endl;
    std::cout << "  ~~~~~~~~  " << std::endl;
}

Memento* Boatman::militusMemento() {
	Memento* mem = new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);
    return mem;
}

void Boatman::vivificaMemento(Memento* mem) {
	if (mem) {
        healthPerSoldier = mem->getHealth();
        damagePerSoldier = mem->getDamage();
        defencePerSoldier = mem->getDefence();
        amountOfSoldiersPerUnit = mem->getAmountOfSoldiers();
        unitName = mem->getUnitName();
	}
}


Boatman::~Boatman() {
    // Cleanup if necessary
    std::cout << "Boatman unit " << unitName << " is being destroyed." << std::endl;
}

