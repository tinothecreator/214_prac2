#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include <iostream>
#include "SoldierFactory.h"

class BoatmanFactory : SoldierFactory {


protected:
	Soldier* createUnit();

	int calculateTotalHeathPerUnit();

	int calculateTotalDamagePerUnit();

	int calculateTotalDefencePerUnit();
};

#endif
