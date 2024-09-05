#include <iostream>
#include <cmath>
#include "AirVehicle.h"
#include "Helicopter.h"

using namespace std;

int main(){
    AirVehicle* heli = new Helicopter(5690, "heli");

    heli->set_fuel(80);
    heli->fly(45, 10);

    cout << "Fuel: " << heli->get_fuel() << endl;
    cout << "Weight: " << heli->get_weight() << endl;
    cout << "Number of flights: " << heli->get_numberOfFlights() << endl;
    
    heli->refuel();
    cout << "Fuel: " << heli->get_fuel() << endl;
    cout << "Weight: " << heli->get_weight() << endl;
    cout << "Number of flights: " << heli->get_numberOfFlights() << endl;

    return 0;
}
