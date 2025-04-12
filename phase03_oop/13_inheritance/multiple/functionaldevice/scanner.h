#include <iostream>
#include "device.h"
using namespace std;

class Scanner:virtual public Device {
    public:

    Scanner(string deviceName, string deviceModel):Device(deviceName, deviceModel){};

    void scanning(){
        cout << " Scanning document.... " << "\n"
        <<" Scan completed " << endl;
    }
};