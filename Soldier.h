#ifndef SOLDIER_H
#define SOLDIER_H

#include<iostream>
#include "Memento.h"

class Soldier {

private:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldiersPerUnit;
    std::string unitName;

public:

	Soldier();

	Soldier(int int_healthPerSoldier, int int_damagePerSoldier, int int_defencePerSoldier, int int_amountOfSoldiersPerUnit, int string_unitName);
	
	virtual Soldier* clonis() = 0;
	
	virtual void engage() = 0;

	virtual void disengage() = 0;

	Memento* militusMemento();

	void vivificaMemento(Memento* mem);

	

private:
	virtual void prepare() = 0;

	virtual void execute() = 0;

	virtual void retreat() = 0;

	virtual void rest() = 0;

public:

};

#endif
