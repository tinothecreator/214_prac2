#include "Army.h"
#include "SoldierFactory.h"


Army::Army() {
	this->size = 0;
}

Army::Army(int infantry_size, int boatman_size, int shieldbearer_size) {
	InfantryFactory * infantryFactory; // made them pointers because it's the only thing that took the errors away lol ><
	BoatmanFactory * boatmanFactory; // also included these h files in army.h
	ShieldBearerFactory * shieldbearerFactory;
	this->size = infantry_size+boatman_size+shieldbearer_size;

	for (int i = 0; i < infantry_size; ++i) {
       
		Soldier* newInfantry = infantryFactory->createUnit(infantry_size);
		soldiers.push_back(newInfantry);
        
    }

    for (int i = 0; i < boatman_size; ++i) {
       
		Soldier* newBoatman = boatmanFactory->createUnit(boatman_size);
		soldiers.push_back(newBoatman);
    
    }

    for (int i = 0; i < shieldbearer_size; ++i) {
        
		Soldier* newShieldBearer = shieldbearerFactory->createUnit(shieldbearer_size);
		soldiers.push_back(newShieldBearer);
        
    }
}

void Army::engage() {
    std::cout << "The army is engaging in combat!" << std::endl;
    for (Soldier* soldier : soldiers) {
        soldier->engage();  // Call the engage method on each Soldier
    }
}

void Army::disengage() {
    std::cout << "The army is retreating from combat!" << std::endl;
    for (Soldier* soldier : soldiers) {
        soldier->disengage();  // Call the disengage method on each Soldier
    }
}


Army::~Army() { // didn't declare properly 
        for (Soldier* soldier : soldiers) {
            delete soldier;
        }
        soldiers.clear();
    }
