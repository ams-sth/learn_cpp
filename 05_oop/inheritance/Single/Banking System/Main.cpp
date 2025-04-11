#include <iostream>
#include "BankAccount.h"
#include "SavingAccount.h"

using namespace std;

int main (){

// BankAccount.h 
    BankAccount account("John", 143, 10000);

    account.ShowDetails();

    int depositedAmount = account.deposit(5000);
    cout << "Amount Deposited : " << depositedAmount << "\n";
    cout << "Balance after Deposit : " << account.getBalance() << "\n\n";

    int withdrawnAmount = account.withdraw(750);
    cout << "Amount Withdrawn : " << withdrawnAmount << "\n";
    cout << "Balance after Withdrawal : " << account.getBalance() << "\n\n";

// SavingAccount.h
    SavingAccount acc("John", 143, 10000, 0.7);
    cout << "Interest Rate : " << acc.calculateInterestRate();
    return 0;
};