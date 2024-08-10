#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H

#include <iostream>
#include "Soldier.h"

class ShieldBearer : public Soldier {

public:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldiersPerUnit;
	std::string unitName;

public:
    ShieldBearer();

	ShieldBearer(int int_healthPersoldier, int int_damagePerSoldier, int int_defencePerSoldier, int int_amountOfSoldiersPerUnit, const std::string& string_unitName);

	ShieldBearer(const ShieldBearer& other); 

    Memento* militusMemento();

	void vivificaMemento(Memento* mem);
	
	Soldier* clonis();

	~ShieldBearer()override; 

private:
	void prepare()override;

	void execute()override;

	void retreat()override;

	void rest()override;

	
};

#endif
