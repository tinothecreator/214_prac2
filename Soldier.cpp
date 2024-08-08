#include "Soldier.h"

/// @brief /
Soldier::Soldier() {
	//tino was here
	this->healthPerSoldier = 0 ;
	this->damagePerSoldier = 0;
	this->defencePerSoldier = 0;
	this->amountOfSoldiersPerUnit = 0;
	this->unitName = "";
}

Soldier::Soldier(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName) {
    //tinooooo
	this->healthPerSoldier = healthPerSoldier;
	this->damagePerSoldier = damagePerSoldier;
	this->defencePerSoldier = defencePerSoldier;
	this->amountOfSoldiersPerUnit = amountOfSoldiersPerUnit;
	this->unitName = unitName;
}

Memento* Soldier::militusMemento() {
    //tinooooooo
	Memento* mem = new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);
    return mem;
}

void Soldier::vivificaMemento(Memento* mem) {
	//tinooooooo
	if (mem) {
        healthPerSoldier = mem->getHealth();
        damagePerSoldier = mem->getDamage();
        defencePerSoldier = mem->getDefence();
        amountOfSoldiersPerUnit = mem->getAmountOfSoldiers();
        unitName = mem->getUnitName();
	}
	
}

void Soldier::engage() { // template method!!
    prepare();  
    execute();  
}

void Soldier::disengage() { // template method!!
    retreat();  
    rest();     
}


