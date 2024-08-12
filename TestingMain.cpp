#include "Titus.h"
#include "CareTaker.h"
#include "SoldierFactory.h"

int main() {
    // Create a Titus object with an army
    Titus titus("General Titus", 10, 10, 10);


    // Create a CareTaker to manage state saves
    CareTaker careTaker;


    // Show army stats before attacking
    std::cout << "Army Stats Before Attack:" << std::endl;
    titus.displayArmyStats();

    // Initial attack
    std::cout << "Initial Attack:" << std::endl;
    titus.attack();

    // Show army stats after attacking
    std::cout << "\nArmy Stats After Attack:" << std::endl;
    titus.displayArmyStats();

    // Save the state of the army
    std::cout << "\nSaving the state of the army..." << std::endl;
    titus.saveState(careTaker);

    // Perform a retreat to simulate some state change
    std::cout << "\nRetreating:" << std::endl;
    titus.retreat();

    // Modify the state of the army by creating a new state
    std::cout << "\nAttacking again after modifications:" << std::endl;
    titus.attack();

    // Save the new state of the army
    std::cout << "\nSaving the new state of the army..." << std::endl;
    titus.saveState(careTaker);

    // Restore the army to its original state
    std::cout << "\nRestoring the army to its original state..." << std::endl;
    titus.restoreState(careTaker, 0);


    // Show army stats after restoring the original state
    std::cout << "\nArmy Stats After Restoring Original State:" << std::endl;
    titus.displayArmyStats();

    // Attack with the restored state
    std::cout << "\nAttack with restored state:" << std::endl;
    titus.attack();

    

    return 0;
}
