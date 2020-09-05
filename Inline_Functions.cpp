#include <iostream>
using namespace std;

inline int Max(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << "Max(10, 20) = " << Max(10, 20);
    cout << "Max(10, 10) = " << Max(10, 10);
}