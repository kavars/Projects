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
        inventory.push_back(item);
        ++actualItem;
    } else {
        std::cout << "Your inventory full" << std::endl;
    } 
}

void Inventory::deleteItem(std::vector<Item*>::iterator itItem)
{
    inventory.erase(itItem);
}

void Inventory::coutInventory()
{
    for (std::vector<Item*>::iterator itInv = inventory.begin(); itInv != inventory.end(); ++itInv)
    {
        (*itInv)->printItem();
    }
}
