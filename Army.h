#ifndef ARMY_H
#define ARMY_H

#include <iostream>
#include <vector>
#include "Soldier.h"
#include "Soldierfactory.h"

class Army{

private:
	int size;
	std::vector<Soldier*> soldiers;

public:
	Army();

	Army(int infantry_size, char infantry, int boatman_size, char boatman, int shieldbearer_size, char shieldbearer);
};

#endif
