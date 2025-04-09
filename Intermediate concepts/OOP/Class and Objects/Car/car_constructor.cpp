#include <iostream>

using namespace std;

class Car
{

private:
    string model;
    string color;
    int tires;
    int windows;

public:
    Car(string model, string color, int tires, int windows) : model(model), color(color), tires(tires), windows(windows) {}

    void description()
    {
        cout << color << " " << model << " have " << windows << " windows and " << tires << " tires." << endl;
    }
};

int main()
{
    Car car("Skoda", "White", 4, 4);
    car.description();
    return 0;
}
