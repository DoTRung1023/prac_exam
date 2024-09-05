#include <iostream>
#include "AirVehicle.h"
#include "Helicopter.h"
#include "Airplane.h"

using namespace std;

Airplane::Airplane():Airplane(0, 0){}                     
Airplane::Airplane(int w, int p):AirVehicle(w), numPassengers(p){}

void Airplane::reducePassengers(int x){
    if (x > numPassengers) {
        numPassengers = 0;
    }
    else {
        numPassengers -= x;
    }
}
int Airplane::get_numPassengers(){
    return numPassengers;
}
void Airplane::fly(int headwind, int minutes){
    float fuel_need = 0;
    if(headwind < 60) {
        fuel_need += 0.25 * minutes;
    }
    else {
        fuel_need += 0.5 * minutes;
    }

    fuel_need += 0.001 * numPassengers * minutes;

    if(fuel - fuel_need >= 20){
        numberOfFlights++;
        fuel -= fuel_need;
    }
}