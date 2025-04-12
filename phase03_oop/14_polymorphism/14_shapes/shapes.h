#ifndef Shapes_H
#define Shapes_H

#include <iostream>

using namespace std;

class Shapes {
public:
   virtual double calculateArea()=0;
    virtual ~Shapes(){}
};
#endif