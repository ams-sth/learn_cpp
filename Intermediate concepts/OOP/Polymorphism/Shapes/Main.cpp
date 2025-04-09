#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

#include <iostream>

using namespace std;

int main(){
    Circle circle(15);
    cout<< "Area of circle : " << circle.calculateArea() << endl;

    Rectangle rectangle(12, 15);
    cout<< "Area of rectangle : " << rectangle.calculateArea() << endl;

    Triangle triangle(30,25);
    cout<< "Area of triangle : " << triangle.calculateArea() << endl;

    return 0;
};