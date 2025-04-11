#ifndef Vehicle_H
#define Vehicle_H

#include <iostream>

using namespace std;

class Vehicle {

private:
    string brand;
    int maxspeed;

public:
    Vehicle(string brand, int maxspeed){
        this->brand = brand;
        this->maxspeed = maxspeed;
    }

    string getBrand(){
        return brand;
    }

    int getMaxSpeed(){
        return maxspeed;
    }

    void start(){
        cout << "The " << getBrand() << " vehcile starts." << endl;
    }

    void displayMaxSpeed(){
        cout << "The maximum speed is " << getMaxSpeed() << " km/h" << "\n\n";
    }
};

#endif