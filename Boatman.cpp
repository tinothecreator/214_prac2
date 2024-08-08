#include "Boatman.h"

Soldier* Boatman::clonis() {
	// TODO - implement Boatman::clonis
	throw "Not yet implemented";
}

void Boatman::engage() {
	// implemented in Soldier.cpp
}

void Boatman::disengage() {
	// implemented in Soldier.cpp
}

void Boatman::prepare() {
	std::cout << "Boatman unit: " << unitName << " is preparing for battle." << std::endl;
	std::cout << "Boatmen are inspecting their boats, checking oars, and preparing for a swift river crossing." << std::endl;
}

void Boatman::execute() {
	std::cout << "Boatmen are rowing across the river swiftly, navigating through enemy fire." << std::endl;
}

void Boatman::retreat() {
	std::cout << "Boatmen are retreating by rowing back to the safety of their base." << std::endl; 
}

void Boatman::rest() {
	std::cout << "Boatmen are resting, repairing boats, and preparing for the next mission." << std::endl;
}

Memento* Boatman::militusMemento() {
	// TODO - implement Boatman::militusMemento
	throw "Not yet implemented";
}

void Boatman::vivificaMemento(Memento* mem) {
	// TODO - implement Boatman::vivificaMemento
	throw "Not yet implemented";
}

Boatman::Boatman() {
	this->healthPerSoldier = 0;
	this->damagePerSoldier = 0;
	this->defencePerSoldier = 0;
	this->amountOfSoldiersPerUnit = 0;
	this->unitName = "";
}

Boatman::Boatman(int int_healthPersoldier, int int_damagePerSoldier, int int_defencePerSoldier, int int_amountOfSoldiersPerUnit, int string_unitName) {
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
