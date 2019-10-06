//
//  Inventory.cpp
//  inventory
//
//  Created by Kirill Varshamov on 06/07/2019.
//

#include "Inventory.hpp"

#include <iostream>

Inventory::Inventory():
capacity(10), actualItem(0)
{ }

Inventory::~Inventory()
{
    for (std::map<size_t, Item*>::iterator iter = inventory.begin(); iter != inventory.end(); ++iter) {
        delete iter->second;
    }
}

void Inventory::addItem(Item* item)
{
    if (actualItem != capacity) {
        size_t num = 0;
        for (size_t i = 0; i != capacity; ++i) {
            if (inventory[i] == NULL) {
                num = i;
                break;
            }
        }

        inventory[num] = item;

        std::cout << std::endl;
        ++actualItem;
    } else {
        delete item;
        std::cout << "Your inventory full" << std::endl;
    } 
}

void Inventory::deleteItem(size_t itemNum)
{
    std::map<size_t, Item*>::iterator delIter = inventory.find(itemNum);
    if (delIter != inventory.end()) {
        delete delIter->second;
        inventory.erase(delIter);
        --actualItem;
    } else {
        std::cout << "Illigal Item key" << std::endl;
    }
    
}

void Inventory::coutInventory()
{
    std::cout << "Capacity of your inventory: " << capacity << std::endl;
    std::cout << "Now in inventory " << actualItem << " of item(s)" << std::endl;
    for (std::map<size_t, Item*>::iterator itInv = inventory.begin(); itInv != inventory.end(); ++itInv)
    {
        std::cout << itInv->first << " ";
        itInv->second->printItem();
    }
}

bool Inventory::existKey(size_t key)
{
    if (inventory.find(key) != inventory.end()) {
        return true;
    }
    return false;
}

Item* Inventory::operator[](const size_t key)
{
    return (--inventory.upper_bound(key))->second;
}
