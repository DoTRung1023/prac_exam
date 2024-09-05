#include <iostream>
#include "AirVehicle.h"
#include "Helicopter.h"
#include "Airplane.h"
#include "AirFleet.h"

using namespace std;

int main(){
    AirFleet afl;

    AirVehicle** fleet = afl.get_fleet();

    cout << "Fuel: " << fleet[0]->get_fuel() << endl;
    cout << "Weight: " << fleet[0]->get_weight() << endl;
    cout << "Number of flights: " << fleet[0]->get_numberOfFlights() << endl;

    cout << "Fuel: " << fleet[1]->get_fuel() << endl;
    cout << "Weight: " << fleet[1]->get_weight() << endl;
    cout << "Number of flights: " << fleet[1]->get_numberOfFlights() << endl;

    cout << "Fuel: " << fleet[2]->get_fuel() << endl;
    cout << "Weight: " << fleet[2]->get_weight() << endl;
    cout << "Number of flights: " << fleet[2]->get_numberOfFlights() << endl;

    cout << "Fuel: " << fleet[3]->get_fuel() << endl;
    cout << "Weight: " << fleet[3]->get_weight() << endl;
    cout << "Number of flights: " << fleet[3]->get_numberOfFlights() << endl;

    cout << "Fuel: " << fleet[4]->get_fuel() << endl;
    cout << "Weight: " << fleet[4]->get_weight() << endl;
    cout << "Number of flights: " << fleet[4]->get_numberOfFlights() << endl;

    return 0;
}