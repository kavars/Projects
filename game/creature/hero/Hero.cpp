//
//  Hero.cpp
//  hero
//
//  Created by Kirill Varshamov on 28/09/2019.
//

#include "Hero.hpp"

Hero::Hero():
Creature(100 - rand() % 20, rand() % 7 + 3, rand() % 10 + 1), sword(Weapon("Short sword", 1)), chest(Armor("Leather chest", 2))
{ }

Hero::~Hero()
{
    std::cout << "You are dead" << std::endl;
}

int Hero::attack()
{

    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();
    
    int damage = randomNumber % 5;

    return damage * (attackPwr + sword.getWeaponAttk());
}

int Hero::protect()
{
    
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();
    
    int protect = randomNumber % 2;

    return protect * (defence + chest.getArmorDef());
}

void Hero::checkStat()
{
    std::cout << "My stats:" << std::endl;
    std::cout << "    HP: " << hp << std::endl;
    std::cout << "    Attack: " << attackPwr << " + (" << sword.getWeaponAttk() << ")" << std::endl;
    std::cout << "    Defence: " << defence << " + (" << chest.getArmorDef() << ")" << std::endl;
}
