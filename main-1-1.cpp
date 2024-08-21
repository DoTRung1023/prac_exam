#include <iostream>

using namespace std;

extern double arrayMin(double*, int);

int main() {
    // test 1
    int lengthArray1 = 4;
    double array1[4] = {1.1, 2.2, 4.3, 5.7};

    cout << "The min value is: " << endl;
    cout << arrayMin(array1, lengthArray1);
    cout << endl;

    // test 2
    int lengthArray2 = 6;
    double array2[6] = {1.1, 2.2, 4.3, -5.7, 0.0, -3.8};

    cout << "The min value is: " << endl;
    cout << arrayMin(array2, lengthArray2);
    cout << endl;

    // test 3
    int lengthArray3 = 1;
    double array3[4] = {-3.9, 10};

    cout << "The min value is: " << endl;
    cout << arrayMin(array3, lengthArray3);
    cout << endl;

    return 0;
}