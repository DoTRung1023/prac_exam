#include <iostream>

using namespace std;

extern double* duplicateArray(double*, int);

int main() {
    int lengthArray1 = 4;
    double array1[4] = {1.1, 2.2, 4.3, 5.7};

    cout << "Old array: " << endl;
    for (int i = 0; i<lengthArray1; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    double* new_array = duplicateArray(array1, lengthArray1);

    cout << "New array: " << endl;
    for (int i = 0; i<lengthArray1; i++) {
        cout << new_array[i] << " ";
    }
    cout << endl;

    delete[] new_array;

    return 0;
}