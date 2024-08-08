#include "ShieldBearerFactory.h"

Soldier* ShieldBearerFactory::createUnit() {
	soldiers = new ShieldBearer();
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
