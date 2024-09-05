#include <iostream>
#include "AirVehicle.h"
#include "Helicopter.h"
#include "Airplane.h"

using namespace std;

int main(){
    AirVehicle* apl = new Airplane(25623, 100);

    apl->set_fuel(95);
    apl->fly(65, 120);

    cout << "Fuel: " << apl->get_fuel() << endl;
    cout << "Weight: " << apl->get_weight() << endl;
    cout << "Number of flights: " << apl->get_numberOfFlights() << endl;
    
    apl->refuel();
    cout << "Fuel: " << apl->get_fuel() << endl;
    cout << "Weight: " << apl->get_weight() << endl;
    cout << "Number of flights: " << apl->get_numberOfFlights() << endl;

    return 0;
}