#include <iostream>
using namespace std;

class clockType {
    int hr;
    int min;
    int sec;
    public:
        clockType(int = 0, int = 0, int = 0);
        void setTime(int, int, int);
        void printTime() const;
        void incrementSeconds();
        void incrementHours();
        void incrementMinutes();
        bool equalTime(const clockType&) const;
};

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
    int hrs = hrs;
    int secs = sec;
    int mins = min;

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

int main () {
    clockType myClock(14, 30, 26);
    // myClock.setTime(10, 23, 23);
    myClock.printTime();
}