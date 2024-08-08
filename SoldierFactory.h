#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include<iostream>
#include"Soldier.h"

class SoldierFactory {

private:
	Soldier* soldiers;

protected:
	virtual Soldier* createUnit() = 0;

	virtual int calculateTotalHeathPerUnit() = 0;

	virtual int calculateTotalDamagePerUnit() = 0;

	virtual int calculateTotalDefencePerUnit() = 0;
};

#endif
