#include <iostream>
#include "AirVehicle.h"

using namespace std;

int main(){
    AirVehicle ah;

    cout << "Fuel: " << ah.get_fuel() << endl;
    cout << "Weight: " << ah.get_weight() << endl;
    cout << "Number of flights: " << ah.get_numberOfFlights() << endl;

    ah.set_fuel(100.37);
    ah.set_numberOfFlights(29829);
    ah.set_weight(72621);

    cout << "Fuel: " << ah.get_fuel() << endl;
    cout << "Weight: " << ah.get_weight() << endl;
    cout << "Number of flights: " << ah.get_numberOfFlights() << endl;

    AirVehicle ah1(52316);

    cout << "Fuel: " << ah1.get_fuel() << endl;
    cout << "Weight: " << ah1.get_weight() << endl;
    cout << "Number of flights: " << ah1.get_numberOfFlights() << endl;


    return 0;
}