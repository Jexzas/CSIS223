#include <iostream>
#include "clockType.h"
using namespace std;

clockType::clockType(int hrs, int mins, int secs) {
    hr = hrs;
    min = mins;
    sec = secs;
}

void clockType::setTime(int hrs, int mins, int secs) {
    hr = hrs;
    min = mins;
    sec = secs;
}

void clockType::printTime() const {
    if (hr < 10) {
        cout << "0" << hr << ":";
    } else {
        cout << hr << ":";
    }
    if (min < 10) {
        cout << "0" << min << ":";
    } else {
        cout << min << ":";
    }
    if (sec < 10) {
        cout << "0" << sec << endl;
    } else {
        cout << sec << endl;
    }
    

}

void clockType::incrementHours() {
    hr += 1;
    if (hr > 23) {
        hr = 0;
    }
}

void clockType::incrementMinutes() {
    min += 1;
    if (min > 59) {
        min = 0;
    }
}

void clockType::incrementSeconds() {
    sec += 1;
    if (sec > 59) {
        sec = 0;
    }
}

bool clockType::equalTime(const clockType& otherClock) const {
    return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
}