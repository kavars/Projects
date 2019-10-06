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
    system("clear");
    std::cout << "Enemy " << name << " appear there!" << std::endl;
}

std::string Enemy::getEnemyName()
{
    return name;
}

Item* Enemy::dropItem()
{
    // drop or not
    int chance = rand() % 2;
    if (chance) {
        // randomize type of item
        int drop = rand() % (int)itemType::Size;
        if (drop == (int)itemType::Weapon) {
            Weapon* dropWeapon = new Weapon("Drop sword test", (rand() % 10 + 1));
            return dropWeapon;
        } else if (drop == (int)itemType::Armor) {
            Armor* dropArmor = new Armor("Drop chest test", (rand() % 10 + 1));
            return dropArmor;
        }
    }
    
    return nullptr;
}
