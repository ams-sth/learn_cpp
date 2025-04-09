#include <iostream>
#include "MFD.h"

using namespace std;

int main(){
    MFD machine("Canon", "CX-213");
    machine.printing(5);
    machine.scanning();
    machine.showDetails();
    return 0;
};