#include "handleFunc.hpp"

bool battle(Hero &hero, Enemy &enemy)
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
            std::cout << "Your attack power: " << hero.attack() - defEnemyChoose << std::endl;
            enemy.setHP(enemy.getHP() - (hero.attack() - defEnemyChoose));
            break;
        case 2:
            defHeroChoose = hero.protect();
            break;
        case 0:
            return true;
            break;

        default:
            std::cout << "Illigal choose, rechoose!" << std::endl;
            break;
    }
    
    if (enemy.getHP() < 0)
    {
        std::cout << "Cool, enemy is dead!" << std::endl;
        return true;
        std::cout << std::endl;
        std::cout << std::endl;
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
    return false;
}

void preBattle(Hero &hero)
{
    bool battleStatus = false;
    Enemy enemy;

    while (!battleStatus)
    {
        battleStatus = battle(hero, enemy);
    }

    std::cout << "Heal time!" << std::endl;
    hero.setHP(hero.getHP() + 15);
}
