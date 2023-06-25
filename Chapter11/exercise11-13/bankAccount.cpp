#include <iostream>
#include <iomanip>
#include "bankAccount.h"
using namespace std;

void bankAccount::setAccountNumber(int acct){
    accountNumber = acct;
};

int bankAccount::getAccountNumber() const {
    return accountNumber;
}

double bankAccount::getBalance() const {
    return balance;
}

void bankAccount::withdraw(double amount) {
    if (balance >= amount) {
     balance = balance - amount;
    }

}

void bankAccount::deposit(double amount) {
    balance = balance + amount;
}

void bankAccount::print() const {
    cout << fixed << setprecision(2);
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account balance: " << balance << endl;
}

bankAccount::bankAccount(int acctNumber, double bal) {
    if (acctNumber >= -1) {
        accountNumber = acctNumber;
    }
    balance = bal;
}