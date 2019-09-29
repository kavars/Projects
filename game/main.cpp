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
#include <glm/glm.hpp>

#include "inventory/Inventory.hpp"

#include "inventory/Item_type/Weapon.hpp"
#include "inventory/Item_type/Armor.hpp"

#include "creature/hero/Hero.hpp"
#include "creature/enemy/Enemy.hpp"

#include "handleFunc.hpp"

// #include "../../Timer/Timer.hpp"

int main() {

    // Timer timer("main");

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
    bool battleStatus = false;

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
            Enemy enemy;

            while (!battleStatus)
            {
                battleStatus = battle(hero, enemy);
            }

            std::cout << "Heal time!" << std::endl;
            hero.setHP(hero.getHP() + 15);
            battleStatus = false;
        } else if (choose == 2) {
            inv.coutInventory();
        } else if (choose == 3)
        {
            hero.checkStat();
        } else if (choose == 0)
        {
            hero.setHP(0);
        }



    }
    
    return 0;
}
