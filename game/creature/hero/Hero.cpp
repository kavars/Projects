//
//  Hero.cpp
//  hero
//
//  Created by Kirill Varshamov on 28/09/2019.
//

#include "Hero.hpp"

Hero::Hero():
Creature(100 - rand() % 20, rand() % 7 + 3, rand() % 10 + 1), sword(new Weapon("Short sword", 4)),  chest(new Armor("Leather chest", 2))
{ }

Hero::~Hero()
{
    system("clear");
    delete sword;
    delete chest;
    std::cout << "You are dead" << std::endl;
}

int Hero::attack()
{

    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();
    
    int damage = randomNumber % 5;

    return damage * (attackPwr + sword->getWeaponAttk());
}

int Hero::protect()
{
    system("clear");
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();
    
    int protect = randomNumber % 2;

    return protect * (defence + chest->getArmorDef());
}

void Hero::checkStat()
{
    system("clear");
    std::cout << "My stats:" << std::endl;
    std::cout << "    HP: " << hp << std::endl;
    std::cout << "    Attack: " << attackPwr << " + (" << sword->getWeaponAttk() << ")" << std::endl;
    std::cout << "    Defence: " << defence << " + (" << chest->getArmorDef() << ")" << std::endl;
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
    if (sword->getWeaponAttk() == 0)
    {
        // delete tmp weapon
        delete sword;
        
        // equip
        sword = ((Weapon*)(inv[item]));
        // remove item from inv
        inv.deleteItem(item);
    } else {
        std::cout << "take off your staff" << std::endl;
    }

}

void Hero::unequipWeapon()
{
    if (sword->getWeaponAttk() != 0) {
        inv.addItem(sword);
        
        // equip tmp weapon
        sword = new Weapon(" ", 0);
    } else {
        std::cout << "you don't equip yet" << std::endl;
    }

}

void Hero::equipArmor(size_t item)
{
    if (chest->getArmorDef() == 0)
    {
        // delete tmp weapon
        delete chest;
        
        // equip
        chest = ((Armor*)(inv[item]));
        // remove item from inv
        inv.deleteItem(item);
    } else {
        std::cout << "take off your staff" << std::endl;
    }
    
}

void Hero::unequipArmor()
{
    if (chest->getArmorDef() != 0) {
        inv.addItem(chest);
        
        // equip tmp weapon
        chest = new Armor(" ", 0);
    } else {
        std::cout << "you don't equip yet" << std::endl;
    }
    
}
