//
//  Item.hpp
//  inventory
//
//  Created by Kirill Varshamov on 06/07/2019.
//

#ifndef Item_hpp
#define Item_hpp

#include <iostream>
#include <string>

class Item {
public:
    Item(std::string iName);

    virtual void printItem();

private:
    std::string itemName;
};

#endif /* Item_hpp */
