#include <iostream>
#include "engineandwheels.h"

using namespace std;

class Car:public Engine, public Wheels {
private:
    string color;
public:
    Car(string colour, int hp, int wheelsNum):Engine(hp), Wheels(wheelsNum){
        color = colour;
    }

void drive(){
    cout << "The " << color << " car is driving with ";
    startEngine();
    rotate();
    }
};