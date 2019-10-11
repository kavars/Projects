//
//  Level.hpp
//  level
//
//  Created by Kirill Varshamov on 11/10/2019.
//

#ifndef LEVEL_HPP
#define LEVEL_HPP

class Level {
public:
    Level();
    int  getExp();
    void setExp(int newExp);
    
    int getLvl();
    int getBorder();
    
    bool getFlag();
    void setFlag();
    
    void CheckLevel();
private:
    int level;
    int exp;
    
    int border;
    
    bool upLvl;
};

#endif // LEVEL_HPP
