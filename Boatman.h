#ifndef BOATMAN_H
#define BOATMAN_H

#include <iostream>
#include "Soldier.h"

class Boatman : Soldier {

private:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldiersPerUnit;
	std::string unitName;

public:
    Boatman();

	Boatman(int int_healthPersoldier, int int_damagePerSoldier, int int_defencePerSoldier, int int_amountOfSoldiersPerUnit, int string_unitName);

	Boatman(const Boatman& other); 

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
