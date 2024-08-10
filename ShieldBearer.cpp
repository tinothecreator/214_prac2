#include "ShieldBearer.h"


ShieldBearer::ShieldBearer() {
	this->healthPerSoldier = 0;
	this->damagePerSoldier = 0;
	this->defencePerSoldier = 0;
	this->amountOfSoldiersPerUnit = 0;
	this->unitName = "";
}

ShieldBearer::ShieldBearer(int int_healthPersoldier, int int_damagePerSoldier, int int_defencePerSoldier, int int_amountOfSoldiersPerUnit, int string_unitName) {
	this->healthPerSoldier = int_healthPersoldier;
	this->damagePerSoldier = int_damagePerSoldier;
	this->defencePerSoldier = int_defencePerSoldier;
	this->amountOfSoldiersPerUnit = int_amountOfSoldiersPerUnit;
	this->unitName = string_unitName;
}

ShieldBearer::ShieldBearer(const ShieldBearer &other)
{
	this->healthPerSoldier = other.healthPerSoldier;
	this->damagePerSoldier = other.damagePerSoldier;
	this->defencePerSoldier = other.defencePerSoldier;
	this->amountOfSoldiersPerUnit = other.amountOfSoldiersPerUnit;
	this->unitName = other.unitName;
}


Soldier* ShieldBearer::clonis() {
	// TODO - implement ShieldBearer::clonis
	throw "Not yet implemented";
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
