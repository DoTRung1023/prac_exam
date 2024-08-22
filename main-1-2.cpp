#include <iostream>
#include <string>
#include "Truck.h"
#include "Truck_yard.h"

using namespace std;

int main() {
    Truck_yard a;
    Truck a1;
    cout << "Truck_yard a: " << endl;
    cout << "Total number of stocks: " << a.get_total_stock_count() << endl;
    cout << "Add a1: " << endl;
    if (a.addStock(a1)) {
        cout << "Stock a1 is successfully added." << endl;
    }
    else {
        cout << "Stock a1 is not added." << endl;
    }

    Truck_yard b(5);
    Truck b1;
    Truck b2(5, "b2");
    Truck b3(4, "b3");
    Truck b4(5, "b4");
    Truck b5(1, "b5");
    Truck b6(5, "b6");

    cout << "Truck_yard b: " << endl;
    cout << "Add stock: " << endl;
    if (b.addStock(b1)) {
        cout << "Stock b1 is successfully added." << endl;
    }
    else {
        cout << "Stock b1 is not added." << endl;
    }
    if (b.addStock(b2)) {
        cout << "Stock b2 is successfully added." << endl;
    }
    else {
        cout << "Stock b2 is not added." << endl;
    }
    if (b.addStock(b3)) {
        cout << "Stock b3 is successfully added." << endl;
    }
    else {
        cout << "Stock b3 is not added." << endl;
    }
    if (b.addStock(b4)) {
        cout << "Stock b4 is successfully added." << endl;
    }
    else {
        cout << "Stock b4 is not added." << endl;
    }
    if (b.addStock(b5)) {
        cout << "Stock b5 is successfully added." << endl;
    }
    else {
        cout << "Stock b5 is not added." << endl;
    }
    if (b.addStock(b6)) {
        cout << "Stock b6 is successfully added." << endl;
    }
    else {
        cout << "Stock b6 is not added." << endl;
    }
    int currentNum = b.get_total_stock_count();
    Truck* arrayTruck = b.get_current_stock_list();
    cout << "Number of trucks with code equalled 5 is: " << b.get_stock_count(5) << endl;
    for (int i = 0; i<currentNum; i++) {
        cout << "Truck #" << i+1 << ":\n";
        cout << "b_name: " << arrayTruck[i].get_brand_name() << endl;
        cout << "b_code: " << arrayTruck[i].get_brand_code() << endl;
    }

    return 0;
}

