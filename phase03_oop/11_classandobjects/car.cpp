#include <iostream>
using namespace std;

class Car {

public:
    string model;
    string color;
    int numberOfDoors;
    int numberOfTires;

    void description()
    {
        cout << color << model << " have " << numberOfDoors << " Doors " << " and " << numberOfTires << " tires " << endl;
    };
};

int main()
{
    Car car;
    car.model = "Skoda";
    car.color = "White";
    car.numberOfDoors = 4;
    car.numberOfTires = 4;
    car.description();
    return 0;
};
