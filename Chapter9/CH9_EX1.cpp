#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct computerType
{
    string manufacturer;
    string modelType;
    string processorType;
    int ram;
    int hardDriveSize;
    int yearBuilt;
    double price;
};

int main()
{
    computerType customBuild;
    cout << fixed << showpoint << setprecision(2);
    cout << "Enter the name of the manufacturer: ";
    getline(cin, customBuild.manufacturer);
    cout << endl;
    cout << "Enter the model of the machine: ";
    getline(cin, customBuild.modelType);
    cout << endl;
    cout << "Enter processor type: ";
    getline(cin, customBuild.processorType);
    cout << endl;
    cout << "Enter the size of RAM (in GB): ";
    cin >> customBuild.ram;
    cout << endl;
    cout << "Enter the size of hard drive (in GB): ";
    cin >> customBuild.hardDriveSize;
    cout << endl;
    cout << "Enter the year the machine was built: ";
    cin >> customBuild.yearBuilt;
    cout << endl;
    cout << "Enter the price: ";
    cin >> customBuild.price;
    cout << endl;
    cout << "Manufacturer: " << customBuild.manufacturer << endl;
    cout << "Model: " << customBuild.modelType << endl;
    cout << "Processor: " << customBuild.processorType << endl;
    cout << "Ram: " << customBuild.ram << endl;
    cout << "Hard Drive Size: " << customBuild.hardDriveSize << endl;
    cout << "Year Built: " << customBuild.yearBuilt << endl;
    cout << "Price: $" << customBuild.price << endl;
    return 0;
}
