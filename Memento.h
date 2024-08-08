#ifndef MEMENTO_H
#define MEMENTO_H

#include<iostream>

class Memento {

private:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldersPerUnit;
	std::string unitName;

public:
	Memento(int int_healthPersoldier, int int_damagePerSoldier, int int_defencePerSoldier, int int_amountOfSoldiersPerUnit, int string_unitName);
};

#endif
