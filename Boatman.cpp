#include "Boatman.h"


Boatman::Boatman() {
	this->healthPerSoldier = 0;
	this->damagePerSoldier = 0;
	this->defencePerSoldier = 0;
	this->amountOfSoldiersPerUnit = 0;
	this->unitName = "";
}

Boatman::Boatman(int int_healthPersoldier, int int_damagePerSoldier, int int_defencePerSoldier, int int_amountOfSoldiersPerUnit, const std::string& string_unitName) {
	this->healthPerSoldier = int_healthPersoldier;
	this->damagePerSoldier = int_damagePerSoldier;
	this->defencePerSoldier = int_defencePerSoldier;
	this->amountOfSoldiersPerUnit = int_amountOfSoldiersPerUnit;
	this->unitName = string_unitName;
}

Boatman::Boatman(const Boatman &other)
{
	this->healthPerSoldier = other.healthPerSoldier;
	this->damagePerSoldier = other.damagePerSoldier;
	this->defencePerSoldier = other.defencePerSoldier;
	this->amountOfSoldiersPerUnit = other.amountOfSoldiersPerUnit;
	this->unitName = other.unitName;
}


Soldier* Boatman::clonis() {
	return new Boatman(*this);
}

void Boatman::engage() {
	// implemented in Soldier.cpp
}

void Boatman::disengage() {
	// implemented in Soldier.cpp
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

