#include <iostream>
#include "circleType.h"
#include "cylinderType.h"
#include <iomanip>


using namespace std;

int main() {
    // Write your main here

    cylinderType cylinder1(4.5, 6);
    cylinderType cylinder2;

    cout << fixed << showpoint << setprecision(2);

    cout << "Cylinder 1: " << endl;
    cylinder1.print();
    cout << endl;

    cout << "Cylinder 2: " << endl;
    cylinder2.print();
    cout << endl; 
    return 0;
}
