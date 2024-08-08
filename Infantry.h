#ifndef INFANTRY_H
#define INFANTRY_H

#include <iostream>
#include <string>
#include "Soldier.h"


class Infantry : public Soldier {

public:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldiersPerUnit;
	std::string unitName;

public:
	Infantry();

	Infantry(int int_healthPersoldier, int int_damagePerSoldier, int int_defencePerSoldier, int int_amountOfSoldiersPerUnit, int string_unitName);
	
    Infantry(const Infantry& other); 

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
