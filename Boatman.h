#ifndef BOATMAN_H
#define BOATMAN_H

#include <iostream>
#include "Soldier.h"


class Boatman : public Soldier {

public:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldiersPerUnit;
	std::string unitName;

public:
    Boatman();

	Boatman(int int_healthPersoldier, int int_damagePerSoldier, int int_defencePerSoldier, int int_amountOfSoldiersPerUnit, const std::string& string_unitName);

	Boatman(const Boatman& other); 

    Memento* militusMemento();

	void vivificaMemento(Memento* mem);

	
	Soldier* clonis();

	~Boatman()override;

private:
	void prepare()override;

	void execute()override;

	void retreat()override;

	void rest()override;


	
};

#endif
