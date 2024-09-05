#ifndef AIRFLEET_H
#define AIRFLEET_H

#include <iostream>
#include "AirVehicle.h"
#include "Helicopter.h"
#include "Airplane.h"

using namespace std;

class AirFleet
{
private:
    AirVehicle **fleet = new AirVehicle*[5];
public:
    AirFleet();                          
    AirVehicle **get_fleet();
};

#endif