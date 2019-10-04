//
//  Item.cpp
//  inventory
//
//  Created by Kirill Varshamov on 06/07/2019.
//

#include "Item.hpp"

Item::Item(std::string iName):
itemName(iName)
{ }

Item& Item::operator=(const Item &rhs)
{
    itemName = rhs.itemName;
    
    return *this;
}

Item::~Item()
{
    
}

void Item::printItem()
{
    std::cout << itemName << std::endl;
}
