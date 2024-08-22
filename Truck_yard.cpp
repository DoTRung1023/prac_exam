#include <iostream>
#include <string>
#include "Truck.h"
#include "Truck_yard.h"

using namespace std;

// default constructor for yard with zero capacity
Truck_yard::Truck_yard() {
    capacity = 0;
    current_number = 0;
    truck_array = new Truck[capacity];
}

// constructor for yard that can hold "capacity" trucks
Truck_yard::Truck_yard(int capacity){
    this->capacity = capacity;
    current_number = 0;
    truck_array = new Truck[capacity];
}

// returns count of the current number of trucks in yard
int Truck_yard::get_total_stock_count() {
    return current_number;
} 

// returns count of the number of trucks with brand code equal to "code"
int Truck_yard::get_stock_count(int code) {
    int match = 0;
    for (int i = 0; i<current_number; i++) {
        if(truck_array[i].get_brand_code() == code) {
            match++;
        }
    }
    return match;
}

// returns an array containing all the trucks in the yard
Truck* Truck_yard::get_current_stock_list() {
    return truck_array;
} 

// tries to add a truck to yard. If there is enough space, return true
// and adds truck to the yard. Otherwise, do not save truck, and return false. 
bool Truck_yard::addStock(Truck c){
    if (current_number < capacity) {
        truck_array[current_number] = c;
        current_number++;
        return true;
    }
    else {
        return false;
    }
}

// destructor
Truck_yard::~Truck_yard() {
    delete[] truck_array;
} 
