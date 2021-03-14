// header file contains the Circle class declaration.

#ifndef CIRCLE_H
#define CIRCLE_H

#define PI 3.14159
#include <cmath>


class Circle
{
  private:
    double radius;  //circle radius
    int centerX, centerY; //center coordinates

  public:
    Circle()   //default constructor
    {
      radius = 1.0;   //accept no arguments
      centerX = centerY = 0;
    }
    Circle(double r)
    {
      radius = r;             //constructor 2
      centerX = centerY = 0; //takes one argument
    }
    Circle(double r, int x, int y) //constructor 3
    {
      radius = r;  //accepts 3 arguments
      centerX = x;
      centerY = y;
    }
    void setRadius(double r)
    {
      radius = r;
    }
    int getXcoord()
    {
      return centerX;
    }
    int getYcoord()
    {
      return centerY;
    }
    double findArea()
    {
      return PI * pow(radius , 2);
    }
}; //end circle class declaration
#endif
