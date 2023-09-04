#include <iostream>
#include "dateType.h"

using namespace std;

int main()
{
    Dates date1(3, 15, 2008);
    Dates date2(15, 20, 2008);
    Dates date3(2, 30, 2009);
    Dates date4;

    int m, d, y;

    cout << "Date 1: ";
    date1.printDate();

    if (date1.isLeapYear()) {
        cout << endl << "this is a leap year";
    } else {
        cout << endl << "this is not a leap year";
    }

    cout << endl;
    cout << "Date 2: ";

    date2.printDate();

    if (date2.isLeapYear()) {
        cout << endl << "this is a leap year";
    } else {
        cout << endl << "this is not a leap year";
    }

    cout << endl;
    cout << "Date 3: ";

    date3.printDate();

    if (date3.isLeapYear()) {
        cout << endl << "this is a leap year";
    } else {
        cout << endl << "this is not a leap year";
    }


    cout << endl;
    cout << "Enter month day year: ";
    while(cin >> m >> d >> y) {
        if (m == 0 && d == 0 && y == 0) {
            break;
        }
        cout << endl;

        date4.setDate(m, d, y);

        cout << "Date 4: ";
        date4.printDate();

        if (date4.isLeapYear()) {
            cout << endl << "this is a leap year";
        } else {
            cout << endl << "this is not a leap year";
        }

        cout << endl;
        cout << "Enter month day year or type '0 0 0' to exit: ";
    }
    

    return 0;
}
