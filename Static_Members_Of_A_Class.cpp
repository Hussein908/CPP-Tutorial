#include <iostream>
using namespace std;

class Box
{
public:
    static int objectCount;
    // Constructor definition.
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
        // Increase every time object is created.
        objectCount++;
    }
    double volume()
    {
        return length * breadth * height;
    }
    friend void showVolume(double l, double b, double h);

private:
    double length;
    double breadth;
    double height;
};

// Friend function.
void showVolume(Box box)
{
    cout << "Box" << Box::objectCount << " volume: " << box.volume() << "." << endl;
}

// Initialize static member of class Box.
int Box::objectCount = 0;

// Main function.
int main()
{
    Box box1(3.3, 1.2, 1.5);
    showVolume(box1);
    Box box2(8.5, 6.0, 2.0);
    showVolume(box2);
    Box box3(1.5, 3.6, 9.1);
    showVolume(box3);

    // Print total numbers of objects.
    cout << "Total objects: " << Box::objectCount << endl;
}