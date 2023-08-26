#include <iostream>

using namespace std;

void CounterType::initializeCounter()
{
    counter = 0;
}

void CounterType::setCounter(int x)
{
    if (x >= 0)
    counter = x;
    else counter = 0;
}

void CounterType::incrementCounter()
{
    counter++;
}

void CounterType::decrementCounter()
{
    if (counter <= 0)
    cout << "Counter cannot be negative." << endl;
    else
    counter--;
}

int CounterType::getCounter() const
{
    return counter;
}

void CounterType::print() const
{
    cout << "Counter = " << counter << endl;
}

CounterType::CounterType(int x)
{
    setCounter(x);
}