#include "payment.h"
#include <iostream>

using namespace std;

class CreditCard:public Payment {
public:
    double processPayment(double amount) override {
        return amount;
    }
};