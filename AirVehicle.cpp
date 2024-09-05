#include <iostream>
#include "AirVehicle.h"

using namespace std;

AirVehicle::AirVehicle():AirVehicle(0){}
AirVehicle::AirVehicle(int w): weight(w), fuel(100), numberOfFlights(0){}

void AirVehicle::refuel(){
    fuel = 100;
} 
void AirVehicle::fly(int headwind, int minutes){
    numberOfFlights++;
}   

void AirVehicle::set_fuel(float fuel){
    this->fuel = fuel;
}
void AirVehicle::set_weight(int weight){
    this->weight = weight;
}
void AirVehicle::set_numberOfFlights(int numberOfFlights){
    this->numberOfFlights = numberOfFlights;
}

float AirVehicle::get_fuel(){
    return fuel;
}
int AirVehicle::get_weight(){
    return weight;
}
int AirVehicle::get_numberOfFlights(){
    return numberOfFlights;
}
