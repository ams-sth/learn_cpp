#ifndef SavingAccount_H
#define SavingAccount_H

#include <iostream>
#include "BankAccount.h"

using namespace std;

class SavingAccount:public BankAccount {
private:
    double interest_rate;
public:
    SavingAccount(string User, int accNumber, double balance, double interest):BankAccount(User, accNumber, balance){
        interest_rate = interest;
    }
    
    double getInterest(){
        return interest_rate;
    }

    double calculateInterestRate(){
        double addInterest = getBalance() * interest_rate;
        double newBalance = deposit(addInterest);
        return newBalance;
    }
};

#endif