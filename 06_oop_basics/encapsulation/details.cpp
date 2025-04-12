#include <iostream>

using namespace std;

class Details
{
private:
    string name;
    int age;

public:
    Details(string n, int a)
    {
        name = n;

        if (a > 0)
        {

            age = a;
        }
        else
        {
            cout << "Age cannot be negative !" << endl;
        }
    }

    void displayDetails()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    Details details("Jane", 20);
    details.displayDetails();

    return 0;
}