#include <iostream>
#include <string>
#include "Truck.h"

using namespace std;

int main() {
    Truck a;
    cout << "Truck a: " << endl;
    cout << "b_name: " << a.get_brand_name() << endl;
    cout << "b_code: " << a.get_brand_code() << endl;

    Truck b(326175, "Super truck");
    cout << "Truck a: " << endl;
    cout << "b_name: " << b.get_brand_name() << endl;
    cout << "b_code: " << b.get_brand_code() << endl;

    return 0;
}

