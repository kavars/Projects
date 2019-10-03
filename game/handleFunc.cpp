//
//  handleFunc.cpp
//  inventory
//
//  Created by Kirill Varshamov on 29/09/2019.
//

#include "handleFunc.hpp"

void battle(Hero &hero)
{
    bool battleStatus = false;
    Enemy enemy;

    while (!battleStatus)
    {
        int choose = 0;
        
        int defHeroChoose = 0;
        int defEnemyChoose = 0;
        
        std::cout << std::endl;
        std::cout << "You have " << hero.getHP() << " HP!" << std::endl;
        std::cout << "Enemy against you and have " << enemy.getHP() << " HP!" << std::endl;
        std::cout << std::endl;
        std::cout << "Choose: " << std::endl;
        std::cout << "1: Attack" << std::endl;
        std::cout << "2: Defend" << std::endl;
        std::cout << "0: Exit game" << std::endl;
        std::cin >> choose;
        switch (choose) {
            case 1:
                system("clear");
                std::cout << "Your attack power: " << hero.attack() - defEnemyChoose << std::endl;
                enemy.setHP(enemy.getHP() - (hero.attack() - defEnemyChoose));
                break;
            case 2:
                defHeroChoose = hero.protect();
                break;
            case 0:
                battleStatus = true;
                break;
                
            default:
                std::cout << "Illigal choose, rechoose!" << std::endl;
                break;
        }
        
        if (enemy.getHP() < 0)
        {
            system("clear");
            std::cout << "Cool, enemy is dead!" << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            battleStatus = true;
        }
        else
        {
            int chance = rand() % 2;
            switch (chance) {
                case 0:
                    std::cout << "Enemy attack power: " << enemy.attack() - defHeroChoose << std::endl;
                    hero.setHP(hero.getHP() - (enemy.attack() - defHeroChoose));
                    break;
                case 1:
                    defEnemyChoose = enemy.protect();
                    break;
                default:
                    break;
            }
        }
    }
    
    std::cout << "Heal time!" << std::endl;
    hero.setHP(hero.getHP() + 15);
}
