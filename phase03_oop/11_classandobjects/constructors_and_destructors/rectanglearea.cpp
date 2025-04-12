#include <iostream>
using namespace std;

class Rectangle {
    public:

    double length;
    double breadth;

    Rectangle (double length, double breadth):length(length), breadth(breadth){};

    double rectangle_area () {
        return length * breadth;
    }

};

int main (){
    Rectangle rect(12, 15);
    cout << " The Area of rectangle is " << rect.rectangle_area() << endl;

}