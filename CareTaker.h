#ifndef CARETAKER_H
#define CARETAKER_H

#include <vector> //included vector and memento
#include "Memento.h"

class CareTaker {
    private:
        std::vector<Memento*> mementos;

    public:
        void addMemento(Memento* mem);

        Memento* getMemento(size_t index) const;

        ~CareTaker();
    
};

#endif
