// Description: Assignment 5 Pure Abstract Base Class
// Author: Katherine-Marie Gonzales
// COMSC200 - 5001
// March 11, 2019
// Status: Complete

// Circle.h

#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"

class Circle : public BasicShape
{
private:
    long centerX;
    long centerY;
    double radius;
public:
    Circle(long x, long y, double r) : BasicShape(x, y, r)
    {
        centerX = x;
        centerY = y;
        radius = r;
    }
    
    long getCenterX() const
    {return centerX;}
    long getCenterY() const
    {return centerY;}
    virtual double calcArea() const;

};

#endif