#ifndef PAYMENT_H
#define PAYMENT_H

#include <iostream>

using namespace std;

class Payment {
public:
   virtual double processPayment(double amount) = 0;
};

#endif