#include "Caretaker.h"

void CareTaker::addMemento(Memento* mem) {
    mementos.push_back(mem);
}

Memento* CareTaker::getMemento(size_t index) const {
    if (index < mementos.size()) {
        return mementos[index];
    }
    return nullptr;
}


 CareTaker::~CareTaker() {
        for (auto memento : mementos) {
            delete memento;
        }
        mementos.clear();
    }

// didn't declare functions correctly 