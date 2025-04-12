#include <iostream>

using namespace std;

int main (){
    string arr[] = {"Ram", "Sam", "Hari"};
    int length = sizeof(arr) / sizeof(arr[0]); 
    for (int i =0; i < length; i++) {
        cout << arr[i] <<endl;
    };
    return 0;
}

/* Note: Since C++ doesn't have auto .length function, 
you have to find the length using sizeof(arr) / sizeof(arr[0]) */

/* Note: If i goes out of bound that is more than index currently present in array, 
it gives corruption error */