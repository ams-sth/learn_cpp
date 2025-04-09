#include "Shapes.h"

#include <iostream>

using namespace std;

class Triangle:public Shapes {

private:
    double length;
    double breadth;

public:
    
    Triangle(double length, double breadth){
        this->length = length;
        this->breadth = breadth;
    }

    double getLength(){
        return length;
    }

    double getBreadth(){
        return breadth;
    }
    double calculateArea() override{
        return 0.5*getLength()*getBreadth();
    }
    
};