#include "Shapes.h"

#include <iostream>

using namespace std;

class Rectangle:public Shapes {
private:
    double length;
    double breadth;

public:
    Rectangle(double length, double breadth){
        this->length=length;
        this->breadth = breadth;
    }

    double getLength(){
        return length;
    }

    double getBreadth(){
        return breadth;
    }
    
    double calculateArea() override {
        return getLength() * getBreadth();
    }
};