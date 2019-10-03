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

void Item::printItem()
{
    std::cout << itemName << std::endl;
}
