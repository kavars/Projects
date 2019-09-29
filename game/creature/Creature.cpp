//
//  Creature.cpp
//  creature
//
//  Created by Kirill Varshamov on 29/09/2019.
//

#include "Creature.hpp"

Creature::Creature(int hp, int attackPwr, int defence):
hp(hp), attackPwr(attackPwr), defence(defence)
{ }

int Creature::attack() {

    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();
    
    int damage = randomNumber % 5;

    return damage * attackPwr;
}

int Creature::protect() {
    
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();
    
    int protect = randomNumber % 2;

    return protect * defence;
}

int Creature::getHP() {
    return hp;
}

void Creature::setHP(int HP) {
    hp = HP;    
}
