#include "Boatman.h"

Soldier* Boatman::clonis() {
	// TODO - implement Boatman::clonis
	throw "Not yet implemented";
}

void Boatman::engage() {
	// TODO - implement Boatman::engage
	throw "Not yet implemented";
}

void Boatman::disengage() {
	// TODO - implement Boatman::disengage
	throw "Not yet implemented";
}

void Boatman::prepare() {
	// TODO - implement Boatman::prepare
	throw "Not yet implemented";
}

void Boatman::execute() {
	// TODO - implement Boatman::execute
	throw "Not yet implemented";
}

void Boatman::retreat() {
	// TODO - implement Boatman::retreat
	throw "Not yet implemented";
}

void Boatman::rest() {
	// TODO - implement Boatman::rest
	throw "Not yet implemented";
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
