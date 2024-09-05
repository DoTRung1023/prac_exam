#ifndef HELICOPTER_H
#define HELICOPTER_H

#include <iostream>
#include "AirVehicle.h"

using namespace std;

class Helicopter: public AirVehicle
{
private:
    string name;                    // name of the Helicopter
public:
    Helicopter(int w, string n);     // creates a Helicopter with weight w and name n

    void fly(int headwind, int minutes);

    void set_name(string name);
    string get_name();
};

#endif