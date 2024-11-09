#ifndef DISPLAY_H
#define DISPLAY_H
#include <string>

// Define the colors for output in ANSI
#define BLACK "\033[30m"
#define RED   "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define RESET "\033[0m"

void displayMessage();
std::string removeAllWhitespace(const std::string& str);

#endif // !display_h
