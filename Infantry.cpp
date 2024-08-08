#include "Infantry.h"

Soldier* Infantry::clonis() {
	// TODO - implement Infantry::clonis
	throw "Not yet implemented";
}

void Infantry::engage() {
	// TODO - implement Infantry::engage
	throw "Not yet implemented";
}

void Infantry::disengage() {
	// TODO - implement Infantry::disengage
	throw "Not yet implemented";
}

void Infantry::prepare() {
	// TODO - implement Infantry::prepare
	throw "Not yet implemented";
}

void Infantry::execute() {
	// TODO - implement Infantry::execute
	throw "Not yet implemented";
}

void Infantry::retreat() {
	// TODO - implement Infantry::retreat
	throw "Not yet implemented";
}

void Infantry::rest() {
	// TODO - implement Infantry::rest
	throw "Not yet implemented";
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
