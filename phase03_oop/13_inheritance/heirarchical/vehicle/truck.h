#include "vehicle.h"

#include <iostream>

using namespace std;

class Truck:public Vehicle {

private:
    int loadCapacity;
    bool trailerAttached;

public:
    Truck(string brand, int maxspeed, int loadCapacity, bool trailerAttached):Vehicle(brand, maxspeed){
        this->loadCapacity = loadCapacity;
        this->trailerAttached = trailerAttached;
    }

    int getLoadCapacity(){
        return loadCapacity;
    }

    bool getTrailerAttached(){
        return trailerAttached;
    }

    void haul(){
        cout << "Hauling " << getLoadCapacity() << " tons." << endl;
    }

    void attachTrailer(){
        if(getTrailerAttached()){
            cout << "Trailer attached " << endl;
        }
        else {
        cout << "No trailer for hauling" <<endl;
        }
    }
};