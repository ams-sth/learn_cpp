#include "creditCard.h"
#include "paypal.h"
#include "googlepay.h"

#include <iostream>
using namespace std;

int main (){
    CreditCard card;
    cout << "Processing credit card payment of $" << card.processPayment(1000) << endl;

    Paypal pal;
    cout << "Processing PayPal payment of $ " << pal.processPayment(500) << endl;

    GooglePay gpay;
    cout << "Processing Gooleg Pay payment of $ " << gpay.processPayment(300) << endl;
    return 0;
};