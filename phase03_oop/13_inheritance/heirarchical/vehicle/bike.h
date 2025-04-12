#include "vehicle.h"

#include <iostream>

using namespace std;

class Bike:public Vehicle {
    
private:
    string type;

public: 
    Bike(string brand, int maxspeed, string type):Vehicle(brand, maxspeed){
        this->type = type;
    }

    string getSports(){
        return type;
    }

    void performStunt(){
        cout << "Performing a stunt on the " << getSports() << " bike." << endl;
    }
};