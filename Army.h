#ifndef ARMY_H
#define ARMY_H

#include <iostream>
#include <vector>
#include "Soldier.h"
#include "Soldierfactory.h"
#include "InfantryFactory.h"
#include "BoatmanFactory.h"
#include "ShieldBearerFactory.h"

class Army{

private:
	int size;
	std::vector<Soldier*> soldiers;

public:
	Army();

	Army(int infantry_size, int boatman_size, int shieldbearer_size);

	void engage();

	void disengage();

	~Army();
};

#endif
