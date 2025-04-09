#include <iostream>

using namespace std;

class Animal {
public:
    string sound;

    Animal(string s) {
        sound = s;
    }

    void makeSound () {
        cout << "Sound of the Animal : " << sound << endl;
    }
};

class Dog : public Animal {
public:
    string breed;

    Dog(string s, string b) : Animal(s) {
        breed = b;
    }

    void makeSound (){
        cout << breed << " barks : " << sound << endl;
    }

};

int main () {
    Dog dog ("Woof", "Pug");
    dog.makeSound();
    return 0;
}

