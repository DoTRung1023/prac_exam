#include <iostream>

using namespace std;

double arrayMin(double* array, int size) {
    double minNumber = array[0];

    for (int i = 0; i<size; i++) {
        if (array[i] < minNumber) {
            minNumber = array[i];
        }
    }
    return minNumber;
}