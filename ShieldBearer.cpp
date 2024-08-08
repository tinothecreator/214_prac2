#include "ShieldBearer.h"

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
	std::cout << "ShieldBearer unit: " << unitName << "is preparing for battle." << std::endl;
	std::cout << "ShieldBearers are tightening shield grips and preparing defense formations." << std::endl;
}

void ShieldBearer::execute() {
	std::cout << "ShieldBearers are advancing slowly, protecting the front lines with their shields." << std::endl;
}

void ShieldBearer::retreat() {
	std::cout << "ShieldBearers are retreating cautiously, keeping shields up to protect the rear." << std::endl;
}

void ShieldBearer::rest() {
	std::cout << "ShieldBearers are resting, ensuring shields and armor are intact." << std::endl;
}

Memento* ShieldBearer::militusMemento() {
	// TODO - implement ShieldBearer::militusMemento
	throw "Not yet implemented";
}

void ShieldBearer::vivificaMemento(Memento* mem) {
	// TODO - implement ShieldBearer::vivificaMemento
	throw "Not yet implemented";
}

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
