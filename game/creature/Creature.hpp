//
//  Creature.hpp
//  creature
//
//  Created by Kirill Varshamov on 29/09/2019.
//

#ifndef CREATURE_HPP
#define CREATURE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Creature {
public:
    Creature(int hp, int attackPwr, int defence);

    int attack();
    int protect();

    int getHP();
    void setHP(int HP);

protected:
    int hp;
    int attackPwr;
    int defence;

};

#endif // CREATURE_HPP
