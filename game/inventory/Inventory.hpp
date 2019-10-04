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
#include <map>

#include "Item_type/Weapon.hpp"
#include "Item_type/Armor.hpp"

class Inventory {
public:
    Inventory();

    void addItem(Item* item);
    void deleteItem(size_t itemNum);
    void coutInventory();
    
    Item* operator[](const size_t key);
    
private:
    std::map<size_t, Item*> inventory;
    size_t capacity;
    size_t actualItem;
};

#endif /* Inventory_hpp */
