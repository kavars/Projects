# compiler
CXX = clang++

# flags
CXXFLAG = -c -Wall -Wextra -pedantic -std=c++14

all: game

game: main.o Hero.o Enemy.o Item.o Weapon.o Armor.o Inventory.o handleFunc.o Creature.o
		$(CXX) main.o Hero.o Enemy.o Item.o Weapon.o Armor.o Inventory.o handleFunc.o Creature.o -o game

main.o: main.cpp
		$(CXX) $(CXXFLAG) main.cpp


# creatures
Creature.o: creature/Creature.cpp
		$(CXX) $(CXXFLAG) creature/Creature.cpp

Hero.o: creature/hero/Hero.cpp
		$(CXX) $(CXXFLAG) creature/hero/Hero.cpp

Enemy.o: creature/enemy/Enemy.cpp
		$(CXX) $(CXXFLAG) creature/enemy/Enemy.cpp


# inventory and items
Item.o: inventory/Item.cpp
		$(CXX) $(CXXFLAG) inventory/Item.cpp

Weapon.o: inventory/Item_type/Weapon.cpp
		$(CXX) $(CXXFLAG) inventory/Item_type/Weapon.cpp

Armor.o: inventory/Item_type/Armor.cpp
		$(CXX) $(CXXFLAG) inventory/Item_type/Armor.cpp

Inventory.o: inventory/Inventory.cpp
		$(CXX) $(CXXFLAG) inventory/Inventory.cpp

handleFunc.o: handleFunc.cpp
		$(CXX) $(CXXFLAG) handleFunc.cpp

# utils
# Timer.o: ../../Timer/Timer.cpp
# 		$(CXX) $(CXXFLAG) ../../Timer/Timer.cpp

clean:
		rm -rf *.o game
