#ifndef __GOAL_H__
#define __GOAL_H__

#include <iostream>
#include <utility>
#include "Interactable.hpp"
#include "Robot.hpp"
#include "Helper.hpp"

class Goal: public Interactable
{
protected:

public:
    Goal(int width, int height):Interactable(width-1, height-1, width, height){
        this->type = GOAL;
    }
    bool interact(Robot* player){
        pair<int, int> pos1 = player->getCoordinates();
        pair<int, int> pos2 = {this->x, this->y};
        
        if(Helper::euclideanDistance(pos1, pos2) == 0){
            return true;
        }
        return false;
    }
    InteractableType getType(){
        return GOAL;
    }
};

#endif