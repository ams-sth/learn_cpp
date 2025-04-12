#include "teacher.h"

#include <iostream>

using namespace std;

class HeadTeacher:public Teacher{
private:
    string department;

public:
    HeadTeacher(string name, int age, string subject, string department):Teacher(name, age, subject){
        this->department = department;
    }

    string getDepartment(){
        return department;
    }

    void lead(){
        cout << "I lead the " << getDepartment() << " department." << endl;
    }

    virtual void introduce(string title) {
        cout << "Hi, I'm " << getName() << " and I am " << getAge() << " years old." 
        << " I am " << title << " of " << department << ". \n";
    }

    void teach() override {
        cout << "My profession is teaching " << getSubject() << endl;
    }
};