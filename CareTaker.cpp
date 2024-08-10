#include "Caretaker.h"

void addMemento(Memento* mem) {
    mementos.push_back(mem);
}

Memento* getMemento(size_t index) const {
    if (index < mementos.size()) {
        return mementos[index];
    }
    return nullptr;
}


 ~CareTaker() {
        for (auto memento : mementos) {
            delete memento;
        }
        mementos.clear();
    }
