#include <iostream>
#include <string>
#include "Truck.h"

using namespace std;

#ifndef TRUCK_YARD_H
#define TRUCK_YARD_H

class Truck_yard
{
private:
    int capacity;
    Truck* truck_array;
    int current_number;
public:
    Truck_yard();  // default constructor for yard with zero capacity
    Truck_yard(int capacity); // constructor for yard that can hold "capacity" trucks

    int get_total_stock_count(); // returns count of the current number of trucks in yard
    int get_stock_count(int code); // returns count of the number of trucks with brand code equal to "code"
    Truck* get_current_stock_list(); // returns an array containing all the trucks in the yard

    bool addStock(Truck c); // tries to add a truck to yard. If there is enough space, return true
                            // and adds truck to the yard. Otherwise, do not save truck, and return false. 

    ~Truck_yard(); // destructor
};
#endif