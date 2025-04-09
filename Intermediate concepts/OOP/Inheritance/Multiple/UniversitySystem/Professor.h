#include <iostream>
#include "Person.h"

using namespace std;

class Professor:virtual public Person {
private:
    int ProfessorID;
    string department;

public:

    Professor(int ID, string dep, string n, int a, string ad):Person(n,a,ad){
        ProfessorID = ID;
        department = dep;
    }

    int getProfessorID(){
        return ProfessorID;
    }

    string getDepartment(){
        return department;
    }

    void teach(){
        cout << "professor with ID" <<getProfessorID() << " of department " << getDepartment() << " is teaching ";
    }

};