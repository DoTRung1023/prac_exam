#include <iostream>
#include <string>
#include "Truck.h"

using namespace std;

// default constructor - makes new truck with brand code number 0 and
// and empty string "" for brand name
Truck::Truck() {
    b_code = 0;
    b_name = "";
}

// constructor taking string representing brand name
// and integer representing code for that brand
Truck::Truck(int b_code, std::string b_name) {
    this->b_code = b_code;
    this->b_name = b_name;
}

// returns the brand name of the truck
std::string Truck::get_brand_name() {
    return b_name;
}

// returns the brand code number of truck
int Truck::get_brand_code() {
    return b_code;
}

// destructor
Truck::~Truck() {}
