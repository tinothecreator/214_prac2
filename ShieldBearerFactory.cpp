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
	Soldier* newShieldBearer = new ShieldBearer(120,20,60,amountOfSoldiersPerUnit,"alpha");
	return newShieldBearer;
}

int ShieldBearerFactory::calculateTotalHeathPerUnit() {
	return soldiers ? soldiers->healthPerSoldier * soldiers->amountOfSoldiersPerUnit : 0;
}

int ShieldBearerFactory::calculateTotalDamagePerUnit() {
	return soldiers ? soldiers->damagePerSoldier * soldiers->amountOfSoldiersPerUnit : 0;

}

int ShieldBearerFactory::calculateTotalDefencePerUnit() {
	return soldiers ? soldiers->defencePerSoldier * soldiers->amountOfSoldiersPerUnit : 0;
}
