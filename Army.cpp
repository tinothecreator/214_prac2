#include "Army.h"
#include "SoldierFactory.h"


Army::Army() {
	this->size = 0;
}

Army::Army(int infantry_size, int boatman_size, int shieldbearer_size) {
	InfantryFactory * infantryFactory; // made them pointers because it's the only thing that took the errors away lol ><
	BoatmanFactory * boatmanFactory; // also included these h files in army.h
	ShieldBearerFactory * shieldbearerFactory;
   // std::cout<<"Army 1\n";
	this->size = infantry_size+boatman_size+shieldbearer_size;

	for (int i = 0; i < infantry_size; ++i) {
       
      // std::cout<<"createunit 0\n";
		Soldier* newInfantry = infantryFactory->createUnit(infantry_size);
        //std::cout<<"createunit 1\n";
		soldiers.push_back(newInfantry);
        
    }

    //std::cout<<"Army 2\n";

    for (int i = 0; i < boatman_size; ++i) {
       
		Soldier* newBoatman = boatmanFactory->createUnit(boatman_size);
		soldiers.push_back(newBoatman);
    
    }

    //std::cout<<"Army 3\n";

    for (int i = 0; i < shieldbearer_size; ++i) {
        
		Soldier* newShieldBearer = shieldbearerFactory->createUnit(shieldbearer_size);
		soldiers.push_back(newShieldBearer);
        
    }

    //std::cout<<"Army 4\n";
}

void Army::engage() {
    std::cout << "The army is engaging in combat!" << std::endl;
    
    bool infantryEngaged = false;
    bool boatmanEngaged = false;
    bool shieldBearerEngaged = false;

    for (Soldier* soldier : soldiers) {
        if (!infantryEngaged && dynamic_cast<Infantry*>(soldier)) {
            soldier->engage();
            infantryEngaged = true;
        } else if (!boatmanEngaged && dynamic_cast<Boatman*>(soldier)) {
            soldier->engage();
            boatmanEngaged = true;
        } else if (!shieldBearerEngaged && dynamic_cast<ShieldBearer*>(soldier)) {
            soldier->engage();
            shieldBearerEngaged = true;
        }

        if (infantryEngaged && boatmanEngaged && shieldBearerEngaged) {
            break;  
        }
    }
}

void Army::disengage() {
    std::cout << "The army is retreating from combat!" << std::endl;

    bool infantryDisengaged = false;
    bool boatmanDisengaged = false;
    bool shieldBearerDisengaged = false;

    for (Soldier* soldier : soldiers) {
        if (!infantryDisengaged && dynamic_cast<Infantry*>(soldier)) {
            soldier->disengage();
            infantryDisengaged = true;
        } else if (!boatmanDisengaged && dynamic_cast<Boatman*>(soldier)) {
            soldier->disengage();
            boatmanDisengaged = true;
        } else if (!shieldBearerDisengaged && dynamic_cast<ShieldBearer*>(soldier)) {
            soldier->disengage();
            shieldBearerDisengaged = true;
        }

        if (infantryDisengaged && boatmanDisengaged && shieldBearerDisengaged) {
            break;  
        }
    }
}



Army::~Army() { // didn't declare properly 
        for (Soldier* soldier : soldiers) {
            delete soldier;
        }
        soldiers.clear();
}

std::vector<Soldier*>& Army::getSoldiers(){ //tino double checked
    return soldiers;
}