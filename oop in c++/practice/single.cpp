/*1. Single Inheritance Problem

   You're tasked with developing software for a construction company.
    Design a base class called `Shape` representing various geometric shapes used in construction, with properties like `width` and `height`.
     Derive a class `Rectangle` from `Shape`, representing rectangular structures. Implement member functions to calculate the area and perimeter of a rectangular structure.
      Test your code by creating objects representing different rectangular structures and displaying their area and perimeter.
*/

#include<bits/stdc++.h>
using namespace std;

class Shape
{
public:
    double width;
    double height;
};

class Rectangle: public Shape
{
public:
    Rectangle(double nheight, double nwidth)
    {
        height = nheight;
        width =nwidth ;
    }

    void displayHeight()
    {
        cout << "The height of the rectangle is: " << height << endl;
    }

    void displayWidth()
    {
        cout << "The width of the rectangle is: " << width << endl;
    }

    double areaOfRectangle()
    {
        double area;
        area = height * width;
        return area;
    }
     double perimeter()
     {
        return 2 * (width + height);
    }
};

int main()
{
    Rectangle r1(5,10);
    r1.displayHeight();
    r1.displayWidth();
    cout << "The area of the rectangle is: " << r1.areaOfRectangle() << endl;
    cout << "The area of the perimeter is: " << r1.perimeter() << endl;
    return 0;
}
