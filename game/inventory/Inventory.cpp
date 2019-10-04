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

void Inventory::addItem(Item* item)
{
    if (actualItem != capacity)
    {
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
        std::cout << "Your inventory full" << std::endl;
    } 
}

void Inventory::deleteItem(size_t itemNum)
{
    std::map<size_t, Item*>::iterator delIter = inventory.find(itemNum);
    inventory.erase(delIter);
    --actualItem;
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

Item* Inventory::operator[](const size_t key)
{
    return (--inventory.upper_bound(key))->second;
}
