#ifndef MEMENTO_H
#define MEMENTO_H

#include<iostream>

class Memento {

private:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldersPerUnit;
	std::string unitName;

public:
	Memento(int healthPersoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName);
	int getHealth() const; 
    int getDamage() const; 
    int getDefence() const; 
    int getAmountOfSoldiers() const; 
    const std::string& getUnitName() const; 
};

#endif
