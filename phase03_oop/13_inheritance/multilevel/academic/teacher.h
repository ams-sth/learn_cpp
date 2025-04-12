#include "person.h"
#include <iostream>

using namespace std;

class Teacher:public Person {
private:
    string subject;

public:
    Teacher(string name, int age, string subject):Person(name, age){
        this->subject = subject;
    }
    string getSubject(){
        return subject;
    }

    virtual void teach(){
        cout << "I teach " << getSubject() << endl;
    }
};
