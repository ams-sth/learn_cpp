#include <iostream>

class Car {

public:
    std::string model;
    std::string color;
    int numberOfDoors;
    int numberOfTires;

    void description()
    {
        std::cout << color << model << " have " << numberOfDoors << " Doors " << " and " << numberOfTires << " tires " << std::endl;
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
