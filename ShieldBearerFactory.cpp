#include "ShieldBearerFactory.h"

Soldier* ShieldBearerFactory::createUnit(int amountOfSoldiersPerUnit) {
	// i chnaged this because we need to make soldiers with attrributes 
	//and not just a default constructor
	//soldiers = new ShieldBearer();

	//ShieldBearer Soldiers will have these stats
	//health => 120
	//damage => 20
	//defence => 60
	//amount of soldiers per unit => 
	//name =>  alpha
	soldiers = new ShieldBearer(120,20,60,amountOfSoldiersPerUnit,"alpha");
	return soldiers;
}

int ShieldBearerFactory::calculateTotalHeathPerUnit() {
	return soldiers->healthPerSoldier * soldiers->amountOfSoldiersPerUnit;
}

int ShieldBearerFactory::calculateTotalDamagePerUnit() {
	return soldiers->damagePerSoldier * soldiers->amountOfSoldiersPerUnit;
}

int ShieldBearerFactory::calculateTotalDefencePerUnit() {
	return soldiers->defencePerSoldier * soldiers->amountOfSoldiersPerUnit;
}
