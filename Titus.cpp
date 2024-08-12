#include "Titus.h"


Titus::	Titus(std::string name, int infantry_size, int boatman_size, int shieldbearer_size){
	this->name = name ;
	this->infantry_size = infantry_size;
	this->shieldbearer_size = shieldbearer_size;
	this->boatman_size = boatman_size;
   // std::cout <<"titus 1\n";
	this->amry = new Army(infantry_size,boatman_size,shieldbearer_size);
   // std::cout <<"titus 2\n";
}

Titus::Titus() {
	this->name = "";
	this->amry = nullptr; // named it amry instead of army 
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

void Titus::saveState(CareTaker& careTaker) { // not declared in h file 
    for (Soldier* soldier : amry->getSoldiers()) { // getSOldiers method not declared and implemented in Army 
        careTaker.addMemento(soldier->militusMemento());
    }
}

// Refine strategy: restore a previous state of the army
void Titus::restoreState(CareTaker& careTaker, size_t index) { // not decalred in h file 
   auto& soldiers = amry->getSoldiers();
	for (size_t i = 0; i < soldiers.size(); ++i) {
		Memento* mem = careTaker.getMemento(index);
		if (mem) {
			soldiers[i]->vivificaMemento(mem);
		}
	}
}

void Titus::displayArmyStats() {
    amry->displayStats();
}


Titus::~Titus() {
    delete amry;
    std::cout << name << " is being destroyed\n";
}



