#include <iostream>
#include <iomanip>
#include "checkingAccount.h"
using namespace std;

double checkingAccount::getMinimumBalance() const {
    return minimumBalance;
}

void checkingAccount::setMinimumBalance(double minBalance) {
    minimumBalance = minBalance;
}

double checkingAccount::getInterestRate() const {
    return interestRate;
}

void checkingAccount::setInterestRate(double intRate) {
    interestRate = intRate;
}

double checkingAccount::getServiceCharge() const{
    return serviceCharge;
}

void checkingAccount::setServiceCharge(double intRate) {
    serviceCharge = intRate;
}

void checkingAccount::postInterest() {
    balance = balance + (balance * interestRate);
}

bool checkingAccount::verifyMinimumumBalance(double amount) {
    if (balance < minimumBalance) {
        return false;
    } else {
        return true;
    }
}

void checkingAccount::writeCheck(double amount) {
    if (balance >= amount) {
     balance = balance - amount;
    }
}

void checkingAccount::withdraw(double amount) {
    if (balance >= amount) {
     balance = balance - amount;
    }
}

void checkingAccount::print() const {
    cout << fixed << setprecision(2);
    cout << "Checking Account Number: " << accountNumber << endl;
    cout << "Checking Account Balance: $" << balance << endl;
    cout << "Checking Account Interest Rate: " << interestRate  * 100 << "%" << endl;
    cout << "Checking Account Service Charge: $" << serviceCharge << endl;
}

checkingAccount::checkingAccount(int acctNumber, double bal, double minBal, double intRate, double servC) {
    if (acctNumber >= -1) {
        accountNumber = acctNumber;
    }
    balance = bal;
    minimumBalance = minBal;
    interestRate = intRate;
    serviceCharge = servC; 
}


