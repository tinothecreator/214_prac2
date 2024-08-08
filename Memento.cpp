#include "Memento.h"

Memento::Memento(int healthPersoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName) {
	this->healthPerSoldier = healthPerSoldier;
	this->damagePerSoldier = damagePerSoldier;
	this->defencePerSoldier = defencePerSoldier;
	this->amountOfSoldersPerUnit = amountOfSoldersPerUnit;
	this->unitName = unitName;
	
}


int getHealth() const { 
	return healthPerSoldier; 
}

int getDamage() const { 
	return damagePerSoldier; 
}

int getDefence() const { 
	return defencePerSoldier; 
}

int getAmountOfSoldiers() const {
	return amountOfSoldiersPerUnit;
}
const std::string& getUnitName() const {
	return unitName; 
}
