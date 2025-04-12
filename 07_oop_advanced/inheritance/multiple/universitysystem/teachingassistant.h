#include <iostream>
#include "professor.h"
#include "student.h"

using namespace std;

class TeachingAssistant:public Student, public Professor {

public:

  TeachingAssistant(string n, int a, string ad, int studentId, string major, int profId, string dept)
        : Person(n, a, ad),  
          Student(studentId, major, n, a, ad),
          Professor(profId, dept, n, a, ad) {}

    void teach () {
        cout << "professor with ID " <<getProfessorID() << " of department " << getDepartment() << " to teach ";

    }

    void study(){
        cout << " student with ID "<< getStudentID() << " of " << getMajor() << " major " << endl;
    }

    void assist (){

        cout << "The assistant is helping ";
        teach();
        study();

    }
};