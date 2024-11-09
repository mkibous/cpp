#pragma once
#include "Fixed.hpp"

class Point
{
private:
    Fixed x;
    Fixed y;
public:
    Point();
    Point(float const x, float const y);
    Point(Point const &src);
    Point &operator=(Point const &rhs);
    ~Point();
    float getx() const;
    float gety() const;
};
bool bsp(Point const a, Point const b, Point const c, Point const point);