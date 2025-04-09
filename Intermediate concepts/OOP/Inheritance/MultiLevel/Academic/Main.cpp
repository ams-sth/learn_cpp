#include "HeadTeacher.h"

#include <iostream>

using namespace std;

int main(){
    HeadTeacher headTeacher("John", 30, "Mathematics", "Science");
    headTeacher.introduce("Head");
    headTeacher.lead();
    headTeacher.teach();
    return 0;
};