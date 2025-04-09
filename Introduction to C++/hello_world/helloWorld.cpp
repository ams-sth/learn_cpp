#include <iostream>
#include <exception>

using namespace std;

string printHelloWorld(string text){
    try{
    return text;
    } 
    catch (const exception& error) { // Catch standard exceptions
        return "Error occurred";
    } 
    catch (...) { // Catch-all for unknown exceptions
        cout << "An unknown error occurred." << endl;
        return "Error occurred";
    }
}

int main()
{
    cout << printHelloWorld("Hello World") << endl;
    return 0;
}

// Note 1: std is a standard library that contains cout, endl etc.
// Note 2: If  using namespace std is not defined, cout and endl should have std:: as prefix.
