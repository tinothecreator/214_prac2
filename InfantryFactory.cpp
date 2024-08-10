#include "InfantryFactory.h"


Soldier* InfantryFactory::createUnit(int amountOfSoldiersPerUnit) {
	// i chnaged this because we need to make soldiers with attrributes 
	//and not just a default constructor
	//soldiers = new Infantry();

	//Infantry Soldiers will have these stats
	//health => 100
	//damage => 50
	//defence => 30
	//amount of soldiers per unit => 
	//name =>  delta

	soldiers = new Infantry(100,50,30,amountOfSoldiersPerUnit,"delta");
	return soldiers;
}

int InfantryFactory::calculateTotalHeathPerUnit() {
	return soldiers->healthPerSoldier * soldiers->amountOfSoldiersPerUnit;
}

int InfantryFactory::calculateTotalDamagePerUnit() {
	return soldiers->damagePerSoldier * soldiers->amountOfSoldiersPerUnit;
}

int InfantryFactory::calculateTotalDefencePerUnit() {
	return soldiers->defencePerSoldier * soldiers->amountOfSoldiersPerUnit;
}
