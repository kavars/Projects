//
//  Inventory.hpp
//  inventory
//
//  Created by Kirill Varshamov on 06/07/2019.
//

#ifndef Inventory_hpp
#define Inventory_hpp

#include <iostream>
#include <vector>

#include "Item_type/Weapon.hpp"
#include "Item_type/Armor.hpp"

class Inventory {
public:
    Inventory();

    void addItem(Item* item);
    void deleteItem(std::vector<Item*>::iterator itItem);
    void coutInventory();
private:
    std::vector<Item*> inventory;
    size_t capacity;
    size_t actualItem;
};

#endif /* Inventory_hpp */
