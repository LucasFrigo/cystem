#ifndef CUBE_H
#define CUBE_H
#include <string>

struct Point {
    float x, y, z;
};

Point rotateY(Point p, float angle);
Point rotateX(Point p, float angle);


#endif // !CUBE_H
