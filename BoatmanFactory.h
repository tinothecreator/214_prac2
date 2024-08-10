#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include <iostream>
#include "SoldierFactory.h"
#include "Boatman.h"

class BoatmanFactory : public SoldierFactory {


public:
	Soldier* createUnit(int amountOfSoldiersPerUnit);

	int calculateTotalHeathPerUnit();

	int calculateTotalDamagePerUnit();

	int calculateTotalDefencePerUnit();
};

#endif
