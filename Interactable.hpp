#ifndef __INTERACTABLE_H__
#define __INTERACTABLE_H__

#include <iostream>
#include <utility>
#include "GridItem.hpp"
#include "Robot.hpp"

enum InteractableType{
    GOAL,
    OBSTACLE
};

class Interactable : public GridItem
{
protected:
    static int iteractableCount;
    InteractableType type;
public:
    Interactable(int x, int y, int width, int height):GridItem(x, y, width, height){
        iteractableCount++;
    }
    Interactable():Interactable(0, 0, 0, 0){}
    virtual bool interact(Robot* player) = 0;
    virtual InteractableType getType() = 0;
    static int getActiveInteractableCount(){
        return iteractableCount;
    }
    ~Interactable(){
        iteractableCount--;
    }
};

int Interactable::iteractableCount = 0;

#endif