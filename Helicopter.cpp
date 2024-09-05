#include <iostream>
#include "AirVehicle.h"
#include "Helicopter.h"

using namespace std;

Helicopter::Helicopter(int w, string n):AirVehicle(w), name(n){}

void Helicopter::fly(int headwind, int minutes){
    float fuel_need = 0;
    if(headwind < 40) {
        fuel_need += 0.18 * minutes;
    }
    else {
        fuel_need += 0.4 * minutes;
    }
    int diff = weight - 5670;
    if(diff > 0) {
        fuel_need += 0.01 * minutes * diff;
    }
    if(fuel - fuel_need >= 20){
        numberOfFlights++;
        fuel -= fuel_need;
    }
}

void Helicopter::set_name(string name){
    this->name = name;
}
string Helicopter::get_name(){
    return name;
}


using namespace std;