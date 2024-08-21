#include <iostream>

using namespace std;

extern void modifyArray(double*, int, double);

int main() {
    int lengthArray1 = 4;
    double array1[4] = {1.1, 2.2, 4.3, 5.7};
    double value1 = -1.8;

    for (int i = 0; i<lengthArray1; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    modifyArray(array1, lengthArray1, value1);

    for (int i = 0; i<lengthArray1; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    return 0;
}
