#include <algorithm>
#include <cctype>
#include <iostream>
#include "display.h"
#include "system_info.h"
using namespace std;

void displayMessage() {
    cout << BLUE << getUser() << endl;
    cout << RED << "OS: " << getOS() << endl;
    cout << MAGENTA << "Shell: " << getShell() << endl;
    cout << GREEN << "CPU: " << getCPU() << endl;
    cout << YELLOW << "RAM: " << removeAllWhitespace(getRAM()).substr(0, 2) << " GB" << endl;
}

string removeAllWhitespace(const string& str) {
    string result = str;
    result.erase(remove_if(result.begin(), result.end(), ::isspace), result.end());
    return result;
}

