//
//  Level.cpp
//  level
//
//  Created by Kirill Varshamov on 11/10/2019.
//

#include "Level.hpp"

Level::Level():
level(1), exp(0), border(100)
{ }

int  Level::getExp()
{
    return exp;
}

void Level::setExp(int newExp)
{
    exp = newExp;
}

int Level::getLvl()
{
    return level;
}

int Level::getBorder()
{
    return border;
}

bool Level::getFlag()
{
    return upLvl;
}

void Level::setFlag()
{
    upLvl = false;
}

void Level::CheckLevel()
{
    // check max level
    if (level != 10) {
        if (exp >= border) {
            ++level;
            upLvl = true;
            border = border + border * 1.5;
        }
    }
}
