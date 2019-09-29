//
//  Enemy.cpp
//  enemy
//
//  Created by Kirill Varshamov on 28/09/2019.
//

#include "Enemy.hpp"

Enemy::Enemy():
Creature(100 - rand() % 20, rand() % 7 + 1, rand() % 5 + 1), name("test")
{
    std::cout << "Enemy appear there!" << std::endl;
}

