#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H

#include <iostream>
#include "Soldier.h"

class ShieldBearer : public Soldier {

public:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldiersPerUnit;
	std::string unitName;

public:
    ShieldBearer();

	ShieldBearer(int int_healthPersoldier, int int_damagePerSoldier, int int_defencePerSoldier, int int_amountOfSoldiersPerUnit, int string_unitName);

	ShieldBearer(const ShieldBearer& other); 

    Memento* militusMemento();

	void vivificaMemento(Memento* mem);
	
	Soldier* clonis();

	void engage();

	void disengage();

private:
	void prepare();

	void execute();

	void retreat();

	void rest();

	
};

#endif
