#include <iostream>

using namespace std;

class Person {
    private:
        string name;
        int age;

    public:
        Person(string name, int age){
            this->name = name;
            this->age = age;
        }

        string getName(){
            return name;
        }

        int getAge(){
            return age;
        }

        void introduce(){
            cout << "Hi, I'm " << getName() << " and I am " << getAge() << " years old." << endl;
        }
};
