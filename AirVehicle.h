#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

#include <iostream>

using namespace std;

class AirVehicle
{
protected:
    int weight;        // the weight of AirVehicle 
    float fuel;        // fuel percentage, initially 100%
    int numberOfFlights; // initially 0
public:
    AirVehicle();
    AirVehicle(int w);  // creates an AirVehicle with weight w

    void refuel();      // Resets fuel back to 100%
    virtual void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)  

    void set_fuel(float fuel);
    void set_weight(int weight);
    void set_numberOfFlights(int numberOfFlights);

    float get_fuel();
    int get_weight();
    int get_numberOfFlights();  
};

#endif