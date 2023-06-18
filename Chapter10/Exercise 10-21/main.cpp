#include <iostream>
#include <string>
#include "bankAccount.h"
#include <iomanip>

using namespace std;

void initAccounts(bankAccount array[10]) {
  for (int i = 0; i < 10; i++) {
    array[i] = bankAccount();
    array[i].assignNumber(i);
  }
};

void createAccount(bankAccount array[10], int num) {
    if (num > 9) {
        cout << "No more users can be added." << endl; 
        exit;
    }
    string name;
    string type;
    double balance;
    double intRate;
    cout << "What is the user's name?" << endl;
    getline(cin, name);
    cout << "What type of account (checking/savings)?" << endl;
    cin >> type;
    cout << "How much money would you like to deposit?" << endl;
    cin.precision(2);
    cin >> fixed >> balance;
    cout << "What is your interest rate?" << endl;
    cin.precision(2);
    cin >> fixed >> intRate;
    array[num].accountNumber = num;
    array[num].name = name;
    array[num].balance = balance;
    array[num].interest = intRate;
    array[num].accountType = type;
}

void modifyAccount(bankAccount array[10], int num) {
    int userChoice;
    cout << "What would you like to change about this account?" << endl;
    cout << "1. Name" << endl << "2. Type" << endl << "3. Balance" << endl << "4. Interest rate" << endl << "5. Cancel" << endl;
    cin >> userChoice;
    switch (userChoice) {
        case 1: {
            cout << "Enter new name:" << endl;
            string newName;
            getline(cin, newName);
            array[num].name = newName;
            break;
        }
        case 2:
        {
            cout << "Enter new account type:" << endl;
            string newType;
            cin >> newType;
            array[num].accountType = newType;
            break;
        }
        case 3:
        { 
            cout << "Enter new balance:" << endl;
            double newBalance;
            cin.precision(2);
            cin >> fixed >> newBalance;
            array[num].balance = newBalance;
            break;
        }
        case 4:
        { 
            cout << "Enter new interest rate:" << endl;
            double newRate;
            cin.precision(2);
            cin >> fixed >> newRate;
            array[num].interest = newRate;
            break;
        }
        case 5: 
        {
            break;
        }
        default:
        {    
            cout << "Invalid selection. Exiting" << endl;
            break;
        }
    }
}

void printAccount(bankAccount array[10], int num) {
    for (int i = 0; i <= num; i++) {
        if (array[i].name != "") {
            cout << "User name: " << array[i].name << endl;
            cout << "Account number: " << i << endl;
            cout << "Account type: " << array[i].accountType << endl;
            cout << "Balance: $" << setprecision(2) << fixed << array[i].balance << endl;
            cout << "Interest rate: " << setprecision(2) << fixed << array[i].interest << "%" << endl;
    
        }
    }

}

int main() {
    // Write your main here
    bankAccount members[10];
    initAccounts(members);
    int counter = 0;
    bool menu = true;
    while (menu) {
        int userChoice;
        cout << "1: Enter 1 to add a new customer." << endl;
        cout << "2: Enter 2 for an existing customer." << endl;
        cout << "3: Enter 3 to print customers' data." << endl;
        cout << "9: Enter 9 to exit the program." << endl;
        cin >> userChoice;
        if (userChoice == 9) {
            menu = false;
        } else if (userChoice == 1) {
            cin.ignore();
            createAccount(members, counter);
            counter++;
        } else if (userChoice == 2) {
            cin.ignore();
            int userNumber;
            cout << "What is the account number of the user you're tryin to modify?" << endl;
            cin >> userNumber;
            if (userNumber > counter) {
                cout << "That's not a valid user." << endl;
            } else {
                modifyAccount(members, userNumber);
            }
        } else if (userChoice == 3) {
            printAccount(members, counter);
        }
    }
    return 0;
}
