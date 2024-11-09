#include <iostream>
#include "display.h"
#include "system_info.h"
using namespace std;

void displayMessage() {
    cout << RED << "OS: " << getOS() << endl;
    cout << GREEN << "CPU: " << getCPU() << endl;
}

