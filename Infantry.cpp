#include "Infantry.h"

Soldier* Infantry::clonis() {
	// TODO - implement Infantry::clonis
	throw "Not yet implemented";
}

void Infantry::engage() {
	// implemented in Soldier.cpp
}

void Infantry::disengage() {
	// implemented in Soldier.cpp
}

void Infantry::prepare() {
	// std::cout << "Infantry unit: " << unitName << " is preparing for battle." << std::endl;
	// std::cout << "Infantry is checking armor and weapons, forming ranks, and boosting morale." << std::endl;

	std::cout << "Infantry is preparing for battle with a square formation." << std::endl;
    
    int formationSize = sqrt(amountOfSoldiersPerUnit); // Square root for a square formation
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
	// TODO - implement Infantry::militusMemento
	throw "Not yet implemented";
}

void Infantry::vivificaMemento(Memento* mem) {
	// TODO - implement Infantry::vivificaMemento
	throw "Not yet implemented";
}

Infantry::Infantry() {
	this->healthPerSoldier = 0;
	this->damagePerSoldier = 0;
	this->defencePerSoldier = 0;
	this->amountOfSoldiersPerUnit = 0;
	this->unitName = "";
} 

Infantry::Infantry(int int_healthPersoldier, int int_damagePerSoldier, int int_defencePerSoldier, int int_amountOfSoldiersPerUnit, int string_unitName) {
	this->healthPerSoldier = int_healthPersoldier;
	this->damagePerSoldier = int_damagePerSoldier;
	this->defencePerSoldier = int_defencePerSoldier;
	this->amountOfSoldiersPerUnit = int_amountOfSoldiersPerUnit;
	this->unitName = string_unitName;
}

Infantry::Infantry(const Infantry &other)
{
	this->healthPerSoldier = other.healthPerSoldier;
	this->damagePerSoldier = other.damagePerSoldier;
	this->defencePerSoldier = other.defencePerSoldier;
	this->amountOfSoldiersPerUnit = other.amountOfSoldiersPerUnit;
	this->unitName = other.unitName;
}
