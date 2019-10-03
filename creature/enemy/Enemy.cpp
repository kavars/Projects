//
//  Enemy.cpp
//  enemy
//
//  Created by Kirill Varshamov on 28/09/2019.
//

#include "Enemy.hpp"

std::vector<std::string> nameVec = {"orc", "bat", "wolf"};

std::string createEnemyName()
{
    int chance = rand() % nameVec.size();

    return nameVec[chance];
}

Enemy::Enemy():
Creature(100 - rand() % 20, rand() % 7 + 1, rand() % 5 + 1), name(createEnemyName())
{
    std::cout << "Enemy " << name << " appear there!" << std::endl;
}

std::string Enemy::getEnemyName()
{
    return name;
}
