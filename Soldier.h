#ifndef SOLDIER_H
#define SOLDIER_H

#include<iostream>
#include "Memento.h"

class Soldier {

	friend class InfantryFactory;
	friend class ShieldBearerFactory;
	friend class BoatmanFactory;

protected:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldiersPerUnit;
    std::string unitName;

public:

	Soldier();

	Soldier(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName);
	
	virtual Soldier* clonis() = 0;
	
	virtual void engage();

	virtual void disengage();

	Memento* militusMemento();

	void vivificaMemento(Memento* mem);

	virtual ~Soldier();

	

protected:
	virtual void prepare() = 0;

	virtual void execute() = 0;

	virtual void retreat() = 0;

	virtual void rest() = 0;

public:

};

#endif
