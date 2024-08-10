#include "Army.h"
#include "SoldierFactory.h"

Army::Army() {
	this->size = 0;
}

Army::Army(int infantry_size, char infantry, int boatman_size, char boatman, int shieldbearer_size, char shieldbearer) {
	InfantryFactory infantryFactory;
	BoatmanFactory boatmanFactory;
	ShieldBearerFactory shieldbearerFactory;

	for (int i = 0; i < infantry_size; ++i) {
        if (infantry == 'i') {
            Soldier* newInfantry = infantryFactory.createUnit();
            soldiers.push_back(newInfantry);
        }
    }

    for (int i = 0; i < boatman_size; ++i) {
        if (boatman == 'b') {
            Soldier* newBoatman = boatmanFactory.createUnit();
            soldiers.push_back(newBoatman);
        }
    }

    for (int i = 0; i < shieldbearer_size; ++i) {
        if (shieldbearer == 's') {
            Soldier* newShieldBearer = shieldbearerFactory.createUnit();
            soldiers.push_back(newShieldBearer);
        }
    }
}


~Army() {
        for (Soldier* soldier : soldiers) {
            delete soldier;
        }
        soldiers.clear();
    }
