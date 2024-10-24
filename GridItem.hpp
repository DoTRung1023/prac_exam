#ifndef __GRIDITEM_H__
#define __GRIDITEM_H__

#include <iostream>
#include <utility>
#include <tuple>

using namespace std;

class GridItem
{
protected:
    int x, y, width, height;
    static int gridItemCount;
public:
    GridItem(int x, int y, int width, int height):x(x), y(y), width(width), height(height){
        gridItemCount++;
    }
    GridItem():GridItem(0, 0, 0, 0){}
    void setCoordinates(int x, int y){
        this->x = x;
        this->y = y;
    }
    std::pair<int,int> getCoordinates(){
        pair<int, int> pos = {x, y};
        return pos;
    }
    int getGridWidth(){
        return width;
    }
    int getGridHeight(){
        return height;
    }
    static int getActiveGridItemCount(){
        return gridItemCount;
    }
    virtual ~GridItem(){
        gridItemCount--;
    }
};

int GridItem::gridItemCount = 0;

#endif