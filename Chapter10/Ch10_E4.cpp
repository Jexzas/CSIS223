// CH10_4.cpp : Defines the entry point for the console application.
// Jesse Roberts

#include <iostream>
#include "CounterType.h"
#include "counterType.cpp"

using namespace std;


int main()
{
    CounterType counter1;
    CounterType counter2(5);
    counter1.print();
    cout << endl;
    counter1.incrementCounter();
    cout << "After Increment counter1: " << counter1.getCounter() << endl;
    cout << "Counter2 = " << counter2.getCounter() << endl;
    counter2.decrementCounter();
    cout << "After decrement counter2 = " << counter2.getCounter() << endl;
    counter1.setCounter(-6);
    cout << "After resetting counter1: " << counter1.getCounter() << endl;
    system("pause");
    return 0;
}
