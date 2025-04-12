#include <iostream>
#include "device.h"
using namespace std;

class Printer:virtual public Device {
    public: 

    Printer(string deviceName, string deviceModel):Device(deviceName, deviceModel){}

    void printing(int document) {
        cout << " Printing document... \n" 
        << " Document printed: " << document << endl;
    }
};