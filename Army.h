#ifndef ARMY_H
#define ARMY_H

#include <iostream>
#include <vector>
#include "Soldier.h"
#include "SoldierFactory.h"
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

	void displayStats(); 

	~Army();

	std::vector<Soldier*>& getSoldiers(); //added for Titus
};

#endif
