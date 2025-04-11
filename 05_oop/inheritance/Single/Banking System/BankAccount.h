#ifndef BankAccount_H
#define BankAccount_H

#include <iostream>

using namespace std;

class BankAccount {
private:
    string Username;
    int AccountNum;
    double Balance;

public:
    BankAccount(string User, int accNumber, double balance) {
        Username = User;
        AccountNum = accNumber;
        Balance = balance;
    }

    string getUsername (){
        return Username;
    }

    int getAccountnumber(){
        return AccountNum;
    }

    double getBalance(){
        return Balance;
    }

    int deposit(int addAmount) {
        Balance += addAmount;
        return addAmount;
    }

    int withdraw(int substractAmount) {
        Balance-=substractAmount;
        return substractAmount;
    }

    void ShowDetails() {
        cout << "Account holder's name : " << Username << "\n"
             << "Account Number : " << getAccountnumber() << "\n"
             << "Initial Balance : " << getBalance() << "\n\n" ;
    }
};

#endif 