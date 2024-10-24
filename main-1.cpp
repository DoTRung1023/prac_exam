#include <iostream>
#include <utility>
#include "Helper.hpp"
#include "GridItem.hpp"

using namespace std;

int main(){
    GridItem* gi1 = new GridItem(1, 2, 3, 4);
    GridItem* gi2 = new GridItem();

    int count = GridItem::getActiveGridItemCount();

    cout << count << endl;

    delete gi1;
    delete gi2;

    return 0;
}