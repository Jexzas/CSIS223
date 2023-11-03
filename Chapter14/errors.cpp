#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Please enter your age: ";
    cin >> age; 
    try {
        if (age >= 21) {
            cout << "Buy some alcohol, please." << endl;
        } else {
            throw(age);
        }
    } catch (int age) {
        cout << "You're not buying any booze, kid." << endl;
        cout << "You're only " << age << endl;
    }
}