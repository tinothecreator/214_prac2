#ifndef CARETAKER_H
#define CARETAKER_H

class CareTaker {
    private:
        std::vector<Memento*> mementos;

    public:
        void addMemento(Memento* mem);

        Memento* getMemento(size_t index) const;
    
};

#endif
