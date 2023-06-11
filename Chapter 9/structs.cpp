#include <iostream>
#include <string>

using namespace std;

int main () {
    struct listOfThings {
        int numberThing;
        string wordThing;
        double decimalThing;
    };
    listOfThings things;
    cout << "Please enter a whole number: " << endl;
    cin >> things.numberThing;
    cout << "Okay, now enter a word: " << endl;
    cin >> things.wordThing;
    cout << "And now, a decimal number: " << endl;
    cin >> things.decimalThing;
    cout << "Your list of things is as such: " << endl;
    cout << "Your whole number is " << things.numberThing << endl;
    cout << "Your word is " << things.wordThing << endl;
    cout << "Your decimal is " << things.decimalThing << endl;
}