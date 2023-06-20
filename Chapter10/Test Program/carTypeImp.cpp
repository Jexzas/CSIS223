//Write the definition of the function set so that instance variables are set according to the paramaters. Instance variables year, price, and numberDaysForSale must be nonnegative.
//Write the definition of the function print to output the values of the instance variables.
//Write the definition of the functions setMake, setModel, setYear, setColor, setPrice, and setNumberDaysForSale to set the value of the instance variable according to the parameter.
//Write the definition of the functions getMake, getModel, getYear, getColor, getPrice, and getNumberDaysForSale to return the value of the instance variable.
//Write the definition of the default constructor of the class carType so that the private member variables are initialized to "", "", 0, "", 0.0, 0.
//Write the definition of the constructor of the class carType so that the private member variables are initialized according to the parameters.

#include <iostream> 
#include "carType.h"
#include <iomanip>

using namespace std; 

carType::carType() {
    make = "";
    model = "";
    year = 0;
    color = "";
    price = 0.0;
    numberDaysForSale = 0;
}

carType::carType(string mak, string mod, int yr, string col, double pr, int days) {
    make = mak;
    model = mod;
    year = yr;
    color = col; 
    price = pr;
    numberDaysForSale = days;
}

void carType::set(string mak, string mod, int yr, string col, double pr, int days) {
    make = mak;
    model = mod;
    year = yr;
    color = col; 
    price = pr;
    numberDaysForSale = days;
}

void carType::print() const {
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "Color: " << color << endl;
    cout << "Price: $" << setprecision(2) << fixed << price << endl;
    cout << "Days on lot: " << numberDaysForSale << endl;
}

void carType::setMake(string mak) {
    make = mak;
}

void carType::setModel(string mod) {
    model = mod;
}

void carType::setYear(int yr) {
    year = yr;
}

void carType::setColor(string col) {
    color = col;
}

void carType::setPrice(double pr) {
    price = pr;
}

void carType::setNumberDaysForSale(int days) {
    numberDaysForSale = days;
}

string carType::getMake() const {
    return make;
}

string carType::getModel() const {
    return model;
}

int carType::getYear() const {
    return year;
}

string carType::getColor() const {
    return color;
}

double carType::getPrice() const {
    return price;
}

int carType::getNumberDaysForSale() const {
    return numberDaysForSale;
}