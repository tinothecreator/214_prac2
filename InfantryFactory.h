#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include<iostream>
#include"SoldierFactory.h"

class InfantryFactory : SoldierFactory {


protected:
	Soldier* createUnit();

	int calculateTotalHeathPerUnit();

	int calculateTotalDamagePerUnit();

	int calculateTotalDefencePerUnit();
};

#endif
