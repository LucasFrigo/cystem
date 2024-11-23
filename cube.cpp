#include "cube.h"
#include <cmath>

using namespace std;

float sine = 0.2;

// based on the formula of 
// sin^2 angle + cos^2angle = 1, that is equal to
// cos = (1 - sine^2)^0.5
float cosine = pow((1 - pow(sine, 2.0)), 0.5);

int widht = 50;
int height = 50;

Point cube[8] = 
{
    {-1, -1, -1}, {-1, -1,  1},
    {-1,  1, -1}, {-1,  1,  1},
    { 1, -1, -1}, { 1, -1,  1},    
    { 1,  1, -1}, { 1,  1,  1},    
};



