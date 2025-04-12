#include "payment.h"
#include <iostream>

using namespace std;

class Paypal:public Payment {
public:
    double processPayment(double amount) override{
        return amount;
    }
};