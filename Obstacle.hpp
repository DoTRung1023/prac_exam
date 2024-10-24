#ifndef __OBSTACLE_H__
#define __OBSTACLE_H__

#include <iostream>
#include <utility>
#include "Interactable.hpp"
#include "Helper.hpp"

class Obstacle: public Interactable
{
public:
    Obstacle(int x, int y, int width, int height):Interactable(x, y, width, height){}
    bool interact(Robot* player){
        pair<int, int> pos1 = player->getCoordinates();
        pair<int, int> pos2 = {this->x, this->y};
        
        if(Helper::euclideanDistance(pos1, pos2) == 0){
            player->takeHit();
            if(player->getHealth() == 0){
                return true;
            }
        }
        return false;
    }
    InteractableType getType(){
        return OBSTACLE;
    }
};

#endif