    #include <iostream>

    using namespace std;

    class House {

    public:

    int numberOfDoor;
    string doorColor;
    string where;

    void actualHouse (){
        cout << " There are " <<  numberOfDoor  <<  doorColor  << " door " << " in the " << where << endl;
    }

    };

    int main (){
        House home;
        home.numberOfDoor=3;
        home.doorColor="brown";
        home.where = "kitchen";
        home.actualHouse();
        return 0;
    };