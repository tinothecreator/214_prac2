#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include "SoldierFactory.h"
#include "ShieldBearer.h"


class ShieldBearerFactory : public SoldierFactory {


protected:
	Soldier* createUnit();

	int calculateTotalHeathPerUnit();

	int calculateTotalDamagePerUnit();

	int calculateTotalDefencePerUnit();
};

#endif
