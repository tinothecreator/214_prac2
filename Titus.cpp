#include "Titus.h"


Titus::	Titus(std::string name, int infantry_size, int boatman_size, int shieldbearer_size){
	this->name = name ;
	this->infantry_size = infantry_size;
	this->shieldbearer_size = shieldbearer_size;
	this->boatman_size = boatman_size;
	this->amry = new Army(infantry_size,boatman_size,shieldbearer_size);
}

Titus::Titus() {
	this->name = "";
	this->army = nullptr;
}

void Titus::attack() {
	if (amry) {
        std::cout << name << " is attacking with an army of size " 
                  << infantry_size + boatman_size + shieldbearer_size << std::endl;
        amry->engage();
    } else {
        std::cout << name << " your army is empty" << std::endl;
    }
}

void Titus::retreat() {
	if (amry) {
        std::cout << name << " is retreating!" << std::endl;
        amry->disengage();
    } else {
        std::cout << name << " your army is empty" << std::endl;
    }
}


Titus::~Titus() {
    delete amry;
}



