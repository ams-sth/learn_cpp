#include "shapes.h"

#include <iostream>

using namespace std;

class Circle:public Shapes {

private:
    double pie = 3.14;
    double radius;

public:
    Circle(double radius){
        this->radius = radius;
    }
    
    double getPie(){
        return pie;
    }

    double getRadius(){
        return radius;
    }

    double calculateArea() override{
        return pie*getRadius()*getRadius();
    }
};