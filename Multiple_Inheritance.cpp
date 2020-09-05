#include <iostream>
using namespace std;

class Shape
{
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }

protected:
    int width;
    int height;
};

class PaintCost
{
public:
    int getCost(int area)
    {
        return area * 70;
    }
};

class Rectangle : public Shape, public PaintCost
{
public:
    int getArea()
    {
        return width * height;
    }
};

int main()
{
    Rectangle rectangle;
    int area;
    rectangle.setWidth(5);
    rectangle.setHeight(7);
    area = rectangle.getArea();
    cout << "Total area: " << rectangle.getArea() << endl;
    cout << "Total paint cost: $" << rectangle.getCost(area) << endl;
    return 0;
}