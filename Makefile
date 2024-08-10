OBJS	= Main.o Titus.o Army.o Memento.o Caretaker.o Soldier.o Infantry.o Boatman.o ShieldBearer.o SoldierFactory.o InfantryFactory.o BoatmanFactory.o ShieldBearerFactory.o
SOURCE	= Main.cpp Titus.cpp Army.cpp Memento.cpp Caretaker.cpp Soldier.cpp Infantry.cpp Boatman.cpp ShieldBearer.cpp SoldierFactory.cpp InfantryFactory.cpp BoatmanFactory.cpp ShieldBearerFactory.cpp
HEADER	= Titus.h Army.h Memento.h Caretaker.h Soldier.h Infantry.h Boatman.h ShieldBearer.h SoldierFactory.h InfantryFactory.h BoatmanFactory.h ShieldBearerFactory.h
OUT	= a.out
FLAGS	= -g3 -c -Wall
LFLAGS	= 
CC	= g++

all:	a.out

a.out: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

Main.o: Main.cpp
	$(CC) $(FLAGS) Main.cpp -lcppunit

Titus.o: Titus.cpp
	$(CC) $(FLAGS) Titus.cpp -lcppunit

Army.o: Army.cpp
	$(CC) $(FLAGS) Army.cpp -lcppunit

Memento.o: Memento.cpp
	$(CC) $(FLAGS) Memento.cpp -lcppunit

Caretaker.o: Caretaker.cpp
	$(CC) $(FLAGS) Caretaker.cpp -lcppunit

Soldier.o: Soldier.cpp
	$(CC) $(FLAGS) Soldier.cpp -lcppunit

Infantry.o: Infantry.cpp
	$(CC) $(FLAGS) Infantry.cpp -lcppunit

Boatman.o: Boatman.cpp
	$(CC) $(FLAGS) Boatman.cpp -lcppunit

ShieldBearer.o: ShieldBearer.cpp
	$(CC) $(FLAGS) ShieldBearer.cpp -lcppunit

SoldierFactory.o: SoldierFactory.cpp
	$(CC) $(FLAGS) SoldierFactory.cpp -lcppunit

InfantryFactory.o: InfantryFactory.cpp
	$(CC) $(FLAGS) InfantryFactory.cpp -lcppunit

BoatmanFactory.o: BoatmanFactory.cpp
	$(CC) $(FLAGS) BoatmanFactory.cpp -lcppunit

ShieldBearerFactory.o: ShieldBearerFactory.cpp
	$(CC) $(FLAGS) ShieldBearerFactory.cpp -lcppunit

clean:
	rm -f $(OBJS) $(OUT)

run: a.out
	./a.out

valgrind: a.out
	valgrind a.out

valgrind_leakcheck: a.out
	valgrind --leak-check=full a.out

valgrind_extreme: a.out
	valgrind --leak-check=full --show-leak-kinds=all --leak-resolution=high --track-origins=yes --vgdb=yes a.out
