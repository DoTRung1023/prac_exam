#ifndef __ROBOT_H__
#define __ROBOT_H__

#include <iostream>
#include <utility>
#include "GridItem.hpp"

class Robot: public GridItem
{
protected:
    int health;
public:
    Robot(int gridWidth, int gridHeight){
        this->x = 0;
        this->y = 0;
        this->width = gridWidth;
        this->height = gridHeight;
        this->health = 3;
    }
    int getHealth(){
        return health;
    }
    void takeHit(){
        if(health > 0){
            health--;
        }
    }
    bool move(int xOffset, int yOffset){
        if(xOffset == 0 && y + yOffset < height && y + yOffset >= 0){
            this->y += yOffset;
            return true;
        }
        else if(yOffset == 0 && x + xOffset < width && x + xOffset >= 0){
            this->x += xOffset;
            return true;
        }
        return false;
    }
};

#endif