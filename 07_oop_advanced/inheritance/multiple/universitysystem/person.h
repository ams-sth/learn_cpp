#ifndef Person_H
#define Person_H

#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int age;
    string address;

public:

    Person(string n, int a, string ad){
        name =n;
        age = a;
        address = ad;
    }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    string getAddress(){
        return address;
    }

    void getInfo(){
        cout << "Name: " << getName() << "\n"
            << "Age: " << getAge() << "\n"
            << "Address: " << getAddress() << endl;
    }
};

#endif