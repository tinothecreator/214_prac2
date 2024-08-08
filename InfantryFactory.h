#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include<iostream>
#include "SoldierFactory.h"
#include "Infantry.h"


class InfantryFactory : public SoldierFactory {


public:
	Soldier* createUnit();

	int calculateTotalHeathPerUnit();

	int calculateTotalDamagePerUnit();

	int calculateTotalDefencePerUnit();
};

#endif
