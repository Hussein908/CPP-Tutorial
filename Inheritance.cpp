/*
    Inheritance - Varislik (Miras alma)
*/

#include <iostream>
using namespace std;

// Superclass - Base Class
class Shape
{
public:
    void setWidth(double width)
    {
        this->width = width;
    }
    void setHeight(double height)
    {
        this->height = height;
    }

protected:
    double width;
    double height;
};

// Subclass - Derivered Class
class Rectangle : public Shape
{
public:
    double getArea()
    {
        return height * width;
    }
};

int main()
{
    Rectangle rectangle;
    rectangle.setWidth(12);
    rectangle.setHeight(10);
    double area = rectangle.getArea();
    cout << "Area of rectangle: " << area << endl;
}