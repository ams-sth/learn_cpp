#ifndef DEVICE_H
#define DEVICE_H

#include <iostream>

using namespace std;

class Device {
private:
    string deviceName;
    string deviceModel;

public:
    Device(string deviceName, string deviceModel){
        this->deviceName = deviceName;
        this-> deviceModel = deviceModel;
    }

    
    string getDeviceName(){
        return deviceName;
    }

    string getDeviceModel(){
        return deviceModel;
    }
    
    void showDetails(){
        cout << "\n Printed from "
        << getDeviceName() << ", "
        << getDeviceModel() << endl;
    }
};
#endif