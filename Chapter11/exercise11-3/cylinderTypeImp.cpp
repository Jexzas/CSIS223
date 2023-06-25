// Implementation of cylinderType class

#include <iostream>
#include "cylinderType.h"
using namespace std;

cylinderType::cylinderType(double r, double h) {
    height = h;
    setRadius(r);
};

void cylinderType::setHeight(double h) {
    height = h;
}

double cylinderType::getHeight()  {
    return height;
}

double cylinderType::volume() {
    return height * circleType::area();
}

double cylinderType::area() {
    return (2 * 3.14159 * getRadius()) * (getRadius() + height);
}

void cylinderType::print() {
    cout << "Surface Area: " << area() << endl;
    cout << "Volume: " << volume() << endl;
    cout << "Height: " << getHeight() << endl;
    cout << "Radius: " << getRadius() << endl;
}