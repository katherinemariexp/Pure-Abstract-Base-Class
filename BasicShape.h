// Description: Assignment 5 Pure Abstract Base Class
// Author: Katherine-Marie Gonzales
// COMSC200 - 5001
// March 11, 2019
// Status: Complete

// BasicShape.h

#ifndef BASICSHAPE_H
#define BASICSHAPE_H

class BasicShape
{
private:
    double area;
public: 
    double getArea() const
    { return area; }
    virtual double calcArea() const;
};

#endif