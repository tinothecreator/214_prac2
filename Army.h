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

	Army(int size);
};

#endif
