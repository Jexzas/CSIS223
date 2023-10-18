#include <iostream>
using namespace std;

class carModel {
    public: 
    string modelName;
    string make;
    string color;
    int year;
    int doors;
    int numOwned;

    carModel (string mod, string mak, string col, int y, int door, int owned) {
        modelName = mod;
        color = col;
        doors = door;
        make = mak;
        year = y;
        numOwned = owned;
    }

    void spitCarFacts(const carModel& obj2) {
        cout << "Car 1\t\t|" << "Car 2" << endl;
        cout << make << "\t\t" << obj2.make << endl;
        cout << modelName << "\t\t" << obj2.modelName << endl;
        cout << color << "\t\t" << obj2.color << endl;
        cout << doors << "\t\t" << obj2.doors << endl;
        cout << year << "\t\t" << obj2.year << endl;
        cout << "Are these the same car(aside from year)? ";
    } 

    bool operator == (const carModel& obj2) {
        if (make == obj2.make) {
            if (modelName == obj2.modelName) {
                if (color == obj2.color) {
                    if (doors == obj2.doors) {
                        return true;
                    } else  { 
                        return false;
                    }
                }   else  { 
                return false;
                }
            } else  { 
                return false;
            }
        } else {
            return false;
        }
    };

    void operator ++(int) {
        numOwned++;
    }
};
    
// Overload == to be compatible with my class
// Car equality is compared by all fields except year.


int main () {
    // Define three cars you've owned
    carModel myMav("Maverick", "Ford", "Grey", 2022, 4, 1);
    carModel myImp1("Impreza", "Subaru", "White", 2018, 5, 2);
    carModel myImp2("Impreza", "Subaru", "White", 2017, 5, 2);

    // compare maverick to impreza
    myMav.spitCarFacts(myImp1);
    if (myMav == myImp1) {
        cout << "Yes!" << endl;
    } else {
        cout << "No!" << endl;
    };
    myImp1.spitCarFacts(myImp2);
    if (myImp2 == myImp1) {
        cout << "Yes!" << endl;
    } else {
        cout << "No!" << endl;
    }

    cout << "How many Imprezas have you owned?" << endl;
    cout << myImp1.numOwned << endl;
    for (int i = 0; i < 15; i++) {
        myImp1++;
        cout << myImp1.numOwned << endl;
    }

    return 0;
}