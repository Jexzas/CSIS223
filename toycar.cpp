#include <iostream>
using namespace std;

int toyFactory(int x, int y, int z) {
    int counter = 0;
    bool trigger = true;
    while (trigger) {
        if (x - 4 >= 0 && y - 2 >= 0 && z - 1 >= 0 ) {
            x = x - 4;
            y = y - 2;
            z = z - 1;
            counter++;
        } else {
            trigger = false;
        }
    }
    return counter;
}

int main() {
    const int wheelsPer = 4;
    const int peoplePer = 2;
    const int bodyPer = 1;
    int wheelsTotal;
    int peopleTotal;
    int bodyTotal;
    cout << "How many wheels do we have in stock?" << endl;
    cin >> wheelsTotal;
    cout << "How many figurines do we have?" << endl;
    cin >> peopleTotal;
    cout << "And how many car bodies?" << endl;
    cin >> bodyTotal;
    int totalCars = toyFactory(wheelsTotal, peopleTotal, bodyTotal);
    cout << "You should be able to make " << totalCars << " cars with the given supplies." << endl;
}