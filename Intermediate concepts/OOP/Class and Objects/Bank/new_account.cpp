#include <iostream>
using namespace std;

class NewAccount
{
public:
    string name;
    string gender;
    int age;
    string number;

    NewAccount(string name, string gender, int age, string number) : name(name), gender(gender), age(age), number(number) {}

    void fillForm()
    {
        cout << "Name : " << name << "\n"
             << "Gender : " << gender << "\n"
             << "Age : " << age << '\n'
             << "Phone Number : " << number << "\n\n";
    }
};

int main()
{
    NewAccount accountOne("John", "Male", 27, "98401847224");
    // accountOne.name = "John";
    // accountOne.gender = "Male";
    // accountOne.age = 27;
    // accountOne.number = "98401847224";
    accountOne.fillForm();

    NewAccount accountTwo("Jane", "Female", 23, "9864164214");
    accountTwo.fillForm();

    return 0;
}