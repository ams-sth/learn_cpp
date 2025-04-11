#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Bike.h"

#include <iostream>

using namespace std;

int main(){
    Car car("Skoda", 190, 5);
    car.start();
    car.carDetails();
    car.displayMaxSpeed();
    car.playMusic();

    Truck truck("Volvo",  150, 3, false);
    truck.start();
    truck.haul();
    truck.attachTrailer();
    truck.displayMaxSpeed();

    Bike bike("Royal Enfield", 200, "Sports" );
    bike.start();
    bike.performStunt();
    bike.displayMaxSpeed();

    return 0;
};