#include <iostream>
#include "person.h"

using namespace std;

class Student:virtual public Person {
private:
    int studentID;
    string major;

public:
    Student(int Id, string degree, string n, int a, string ad):Person(n,a,ad){
        studentID = Id;
        major = degree;
    }

    int getStudentID(){
        return studentID;
    }

    string getMajor(){
        return major;
    }

    void study(){
        cout << getStudentID() << " Id student is studying " << getMajor() << " major " << endl;
    }
};