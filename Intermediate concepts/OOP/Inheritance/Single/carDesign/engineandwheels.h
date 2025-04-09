#ifndef engineandwheels_H
#define engineandwheels_H

#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower;

public:
    Engine(int hp) {
        horsepower = hp;
    }

    int getHorsepower(){
        return horsepower;
    }

    void startEngine() {
        cout << "" << horsepower << " horsepower " << endl;
    }
};

class Wheels {
private:
    int wheelCount;

public:
    Wheels(int wheelsNum) {
        wheelCount = wheelsNum;
    }

    int getWheelCount(){
        return wheelCount;
    }

    void rotate(){
        cout << "The" << wheelCount << "wheels are rotating" << endl;
    }
};

#endif