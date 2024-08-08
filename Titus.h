#ifndef TITUS_H
#define TITUS_H


#include <iostream>
#include "Army.h"
#include "CareTaker.h"


class Titus {

private:
	int size;
	Army* amry;
	std::string name;

public:
	void attack();

	void retreat();

	Titus(int string_name, int int_size, int army_Army);

	Titus();
};

#endif
