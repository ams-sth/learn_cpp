
#include "Vehicle.h"
# include <iostream>

using namespace std;

class Car:public Vehicle {
private:
     int seatingCapacity;

public:
    Car(string brand, int maxspeed, int seatingCapacity):Vehicle(brand, maxspeed){
        this->seatingCapacity = seatingCapacity;
    }

    int getSeatingCapacity(){
        return seatingCapacity;
    }

    void playMusic(){
        cout << "Playing music in the car";
    }

    void carDetails(){
       cout << "This car can seat " << getSeatingCapacity() << "people." << endl;
    }
};