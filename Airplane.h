#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <iostream>
#include "AirVehicle.h"
#include "Helicopter.h"

using namespace std;

class Airplane: public AirVehicle
{
protected:
    int numPassengers;               // number of passengers on the Airplane
public:
    Airplane();                       
    Airplane(int w, int p);           // Create Airplane with weight w and passengers p

    void reducePassengers(int x);     // reduce passenger list by x
    int get_numPassengers();
    void fly(int headwind, int minutes);         
};

#endif
