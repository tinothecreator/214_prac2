#include "ShieldBearer.h"

Soldier* ShieldBearer::clonis() {
	// TODO - implement ShieldBearer::clonis
	throw "Not yet implemented";
}

void ShieldBearer::engage() {
	// TODO - implement ShieldBearer::engage
	throw "Not yet implemented";
}

void ShieldBearer::disengage() {
	// TODO - implement ShieldBearer::disengage
	throw "Not yet implemented";
}

void ShieldBearer::prepare() {
	// TODO - implement ShieldBearer::prepare
	throw "Not yet implemented";
}

void ShieldBearer::execute() {
	// TODO - implement ShieldBearer::execute
	throw "Not yet implemented";
}

void ShieldBearer::retreat() {
	// TODO - implement ShieldBearer::retreat
	throw "Not yet implemented";
}

void ShieldBearer::rest() {
	// TODO - implement ShieldBearer::rest
	throw "Not yet implemented";
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
