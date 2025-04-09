#include <iostream>

using namespace std;

class Rectangle
{
private:
    double length;
    double breadth;

public:
    void setLength(double len)
    {
        if (len > 0)
        {

            length = len;
        }
        else
        {
            cout << "Length cannot be 0 !";
        }
    };

    double getLength()
    {
        return length;
    }

    void setBreadth(double bre)
    {
        if (bre > 0)
        {

            breadth = bre;
        }
        else
        {
            cout << "Breadth cannot be 0 !";
        }
    };

    double getBreadth()
    {
        return breadth;
    }

    double Area()
    {
        return length * breadth;
    }

    double Perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle rect;
    rect.setLength(23);
    rect.setBreadth(23);

    cout << "Length : " << rect.getLength() << endl;
    cout << "Breadth : " << rect.getBreadth() << endl;

    cout << "Area : " << rect.Area() << endl;
    cout << "Perimeter : " << rect.Perimeter() << endl;

    return 0;
};