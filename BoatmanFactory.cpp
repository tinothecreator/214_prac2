#include "BoatmanFactory.h"

Soldier* BoatmanFactory::createUnit(int amountOfSoldiersPerUnit) {
	// i chnaged this because we need to make soldiers with attrributes 
	//and not just a default constructor
	//soldiers = new Boatman();

	//Boatman Soldiers will have these stats
	//health => 80
	//damage => 40
	//defence => 20
	//amount of soldiers per unit => 
	//name =>  beta
	Soldier* newBoatman = new Boatman(80,40,20,amountOfSoldiersPerUnit,"beta");
	return newBoatman;
}

int BoatmanFactory::calculateTotalHeathPerUnit() {
	return soldiers->healthPerSoldier * soldiers->amountOfSoldiersPerUnit;
}

int BoatmanFactory::calculateTotalDamagePerUnit() {
	return soldiers->damagePerSoldier * soldiers->amountOfSoldiersPerUnit;
}

int BoatmanFactory::calculateTotalDefencePerUnit() {
	return soldiers->defencePerSoldier * soldiers->amountOfSoldiersPerUnit;
}
