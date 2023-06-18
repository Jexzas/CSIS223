#include <iostream>
#include "clockType.h"
using namespace std;


int main () {
    clockType myClock(14, 6, 26);
    clockType yourClock(14, 6, 26);
    // myClock.setTime(10, 23, 23);
    myClock.printTime();
    cout << myClock.equalTime(yourClock);
}