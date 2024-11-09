#include "system_info.h"
#include <cstddef>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

string getOS() {
    string osName = "";
    ifstream file("/etc/os-release");
    string line;

    if(file.is_open()) {
        while(getline(file, line)) {
            size_t pos = line.find("PRETTY_NAME");

            if(pos != string::npos) {
                size_t startPos = line.find("=") + 2;
                osName = line.substr(startPos, line.size() - startPos - 1);
            }
        }
        file.close();
    }
    return osName;
}

string getCPU() {
    string cpuName = "";
    ifstream file("/proc/cpuinfo");
    string line;

    if(file.is_open()) {
        while(getline(file, line)) {
            size_t pos = line.find("model name");

            if(pos != string::npos) {
                size_t startPos = line.find(":") +  2;
                cpuName = line.substr(startPos, line.size() - startPos);
            }
        }
        file.close();
    }
    return cpuName;
}


string getGPU() {
    string gpuName = "";
    return  gpuName;
}

string getDE() {
    string deName = "";
    return  deName;
}

string getWM() {
    string wmName = "";
    return  wmName;
}

string getUser() {
    string userName = "";
    const char* user = getenv("USER") ;
    userName = user; 

    return  userName;
}

string getHostname() {
    string hostname = "";
    return hostname;
}

string getShell() {
    string shellName = "";
    const char* shell = getenv("SHELL");
    shellName = shell;

    size_t pos = shellName.rfind("/");
    if(pos != string::npos) {
        shellName = shellName.substr(pos + 1);
    }

    return  shellName;
}

string getRAM() {
    string ramQuant = "";
    ifstream file("/proc/meminfo");
    string line;
    
    if(file.is_open()) {
        while(getline(file, line)) {
            size_t pos = line.find("MemTotal");

            if(pos != string::npos) {
                size_t startPos = line.find(":") + 1;
                ramQuant = line.substr(startPos, line.size() - startPos);
            }
        }
        file.close();
    }
    return  ramQuant;
}
