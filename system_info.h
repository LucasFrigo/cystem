#ifndef SYSTEM_INFO_H
#define SYSTEM_INFO_H
#include <string>
#include <unordered_map>
#include <fstream>

std::string getOS();
std::string getCPU();
std::string getGPU();
std::string getDE();
std::string getWM();
std::string getUserAndHost();
std::string getShell();
std::string getRAM();

#endif // !system_info_h
