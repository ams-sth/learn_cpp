#include "payment.h"

#include <iostream>

using namespace std;

class GooglePay: public Payment {
public:
    double processPayment(double amount) override {
        return amount;
    }
};
