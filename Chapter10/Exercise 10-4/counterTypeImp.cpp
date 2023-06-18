#include <iostream>
#include "counterType.h"
using namespace std;

counterType::counterType() {
    counter = 0;
}
counterType::counterType(int num) {
  counter = num;
}

int counterType::getCounter() {
  return counter;
}

void counterType::setCounter(int num = 0) {
  if (num >= 0) {
    counter = num;
  } else{ 
    counter = 0;
  }
}

void counterType::incrementCounter() {
  counter++;
}

void counterType::decrementCounter() {
  if (counter > 0) {
    counter--;
  }
}

void counterType::print() {
  cout << "Counter = " << counter << endl;
}
