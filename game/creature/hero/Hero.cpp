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
    system("clear");
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
    system("clear");
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();
    
    int protect = randomNumber % 2;

    return protect * (defence + chest.getArmorDef());
}

void Hero::checkStat()
{
    system("clear");
    std::cout << "My stats:" << std::endl;
    std::cout << "    HP: " << hp << std::endl;
    std::cout << "    Attack: " << attackPwr << " + (" << sword.getWeaponAttk() << ")" << std::endl;
    std::cout << "    Defence: " << defence << " + (" << chest.getArmorDef() << ")" << std::endl;
    std::cout << std::endl;
}

void Hero::addItemToInv(Item* item)
{
    inv.addItem(item);
}

void Hero::delItemFromInv()
{
    system("clear");
    inv.coutInventory();
    std::cout << "Enter Num of item to delete" << std::endl;
    size_t numItem;
    std::cin >> numItem;
    inv.deleteItem(numItem);
}


Inventory& Hero::getInv()
{
    return inv;
}

void Hero::equipWeapon(size_t item)
{
    if (sword.getWeaponAttk() == int(NULL))
    {
        sword = *((Weapon*)(inv[item]));
        sword.printItem();
        inv.deleteItem(item);
    } else {
        std::cout << "take off your staff" << std::endl;
    }

}

void Hero::unequipWeapon()
{
//    Weapon* ptrWeap = &sword;
//    inv.addItem(ptrWeap);
//    sword.~Weapon();
}
