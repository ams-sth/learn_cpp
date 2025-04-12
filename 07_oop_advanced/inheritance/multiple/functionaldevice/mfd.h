#include <iostream>
#include "Printer.h"
#include "Scanner.h"

using namespace std;

class MFD:public Printer, public Scanner {
    public:
    MFD(string deviceName, string deviceModel)
    :Device(deviceName, deviceModel), Printer(deviceName, deviceModel), Scanner(deviceName, deviceModel){}
}; 

