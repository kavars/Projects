//
//  Enemy.hpp
//  enemy
//
//  Created by Kirill Varshamov on 28/09/2019.
//

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

#include "../Creature.hpp"

class Enemy: public Creature {
public:
    Enemy();

    std::string getEnemyName();

private:
    std::string name;
};

#endif // ENEMY_HPP
