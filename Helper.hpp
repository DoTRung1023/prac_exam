#ifndef __HELPER_H__
#define __HELPER_H__

#include <iostream>
#include <utility>
#include <cmath>

class Helper
{
public:
    // function to calculate the euclidean distance between two coordinates.
    static double euclideanDistance(std::pair<int, int> item1, std::pair<int, int> item2){
        int x1 = item1.first;
        int y1 = item1.second;
        int x2 = item2.first;
        int y2 = item2.second;

        return sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
    }
};

#endif