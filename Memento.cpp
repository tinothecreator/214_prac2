#include "Memento.h"

Memento::Memento(int healthPersoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName) {
	this->healthPerSoldier = healthPerSoldier;
	this->damagePerSoldier = damagePerSoldier;
	this->defencePerSoldier = defencePerSoldier;
	this->amountOfSoldersPerUnit = amountOfSoldersPerUnit;
	this->unitName = unitName;
	
}


int Memento::getHealth() const { 
	return healthPerSoldier; 
}

int Memento::getDamage() const { 
	return damagePerSoldier; 
}

int Memento::getDefence() const { 
	return defencePerSoldier; 
}

int Memento::getAmountOfSoldiers() const {
	return amountOfSoldersPerUnit;
}
const std::string& Memento::getUnitName() const {
	return unitName; 
}
