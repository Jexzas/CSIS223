#include <iostream>
#include "bankAccount.h"
#include "checkingAccount.h"
#include "savingsAccount.h"
using namespace std;

int main() {
    // Write your main here
    bankAccount mainAccount(1001, 0);
    checkingAccount checkAccount(1002, 12, 5, .03, 3);
    savingsAccount saveAccount(1003, 1090, .04);
    mainAccount.print();
    checkAccount.print();
    saveAccount.print();
    return 0;
}
