#ifndef TITUS_H
#define TITUS_H


#include <iostream>
#include "Army.h"
#include "CareTaker.h"


class Titus {

private:
	int infantry_size;
	int boatman_size;
	int shieldbearer_size;
	Army* amry;
	std::string name;

public:
	void attack();

	void retreat();

	Titus(std::string name, int infantry_size, int boatman_size, int shieldbearer_size);

	Titus();

	~Titus();

	void saveState(CareTaker& careTaker);

	void restoreState(CareTaker& careTaker, size_t index);

	void displayArmyStats();
};

#endif
