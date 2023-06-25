#include <iostream>
#include <iomanip>
#include "savingsAccount.h"
using namespace std;

double savingsAccount::getInterestRate() const {
    return interestRate;
}

void savingsAccount::setInterestRate(double rate) {
    interestRate = rate;
}

void savingsAccount::withdraw(double amount) {
    if (balance >= amount) {
        balance = balance - amount;
    }
}

void savingsAccount::postInterest() {
    balance = balance + (balance * interestRate);
}

void savingsAccount::print() const {
    cout << fixed << setprecision(2);
    cout << "Savings Account Number: " << accountNumber << endl;
    cout << "Savings Account Balance: $" << balance << endl;
    cout << "Interest Rate: " << interestRate * 100 << "%" << endl;
}

savingsAccount::savingsAccount(int accNumber, double bal, double intRate) {
    if (accNumber >= -1) {
        accountNumber = accNumber;
    }
    balance = bal;
    if (intRate >= 0) {
        interestRate = intRate;
    }
}