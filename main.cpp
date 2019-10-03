//
//  main.cpp
//  inventory
//
//  Created by Kirill Varshamov on 06/07/2019.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

#include <vector>

#include "inventory/Inventory.hpp"

#include "inventory/Item_type/Weapon.hpp"
#include "inventory/Item_type/Armor.hpp"

#include "creature/hero/Hero.hpp"
#include "creature/enemy/Enemy.hpp"

#include "handleFunc.hpp"

int main() {

    Inventory inv;

    Weapon weapTest("Sword", 1);
    Armor  armTest("Leather Chest", 2);

    Weapon* weapPoint = &weapTest;
    Armor*  armorPoint = &armTest;
    
    inv.addItem(weapPoint);
    inv.addItem(armorPoint);

    srand(static_cast<unsigned int>(time(0)));

    Hero hero;

    // main loop

    int choose = 0;
    

    while (hero.getHP() > 0)
    {
        std::cout << "Choose what to do:" << std::endl;
        std::cout << "1: Find Enemy" << std::endl;
        std::cout << "2: Check inventory" << std::endl;
        std::cout << "3: Check my stats" << std::endl;
        std::cout << "0: Exit game" << std::endl;
        std::cin >> choose;
        std::cout << std::endl;

        if (choose == 1)
        {
            // battle
            
        } else if (choose == 2) {
            
        } else if (choose == 3)
        {
            
        } else if (choose == 0)
        {
            
        }

        switch (choose)
        {
        
        case 1:
            preBattle(hero);
            break;
        
        case 2:
            inv.coutInventory();
            break;
        
        case 3:
            hero.checkStat();
            break;
        
        case 0:
            hero.setHP(0);
            break;
        
        default:
            break;
        }



    }
    
    return 0;
}
