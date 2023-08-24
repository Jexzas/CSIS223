#include <iostream>
using namespace std;

struct houseType {
    string style;
    int numOfBedrooms;
    int numOfBathrooms;
    int numOfCarsGarage;
    int yearBuilt;
    int finishedSquareFootage;
    double price;
    double tax;
};

int main () {
    houseType aFrame;
    aFrame.style = "A-Frame";
    aFrame.numOfBedrooms = 2;
    aFrame.numOfBathrooms = 1;
    aFrame.numOfCarsGarage = 1;
    aFrame.yearBuilt = 1956;
    aFrame.finishedSquareFootage = 1096;
    aFrame.price = 192000.52;
    aFrame.tax = 3200.67;
    cout << "Welcome to the house tour! Today, we have to show you a beautiful " << aFrame.style << " style house, sporting " << aFrame.numOfBedrooms << " bedrooms, " << aFrame.numOfBathrooms << " bathrooms, and a " << aFrame.numOfCarsGarage << " car garage. It was built in " << aFrame.yearBuilt << " with total square footage of " << aFrame.finishedSquareFootage << ". It's currently listed for $" << aFrame.price << ", and you can expect the taxes on that to be $" << aFrame.tax << " approximately.";
}