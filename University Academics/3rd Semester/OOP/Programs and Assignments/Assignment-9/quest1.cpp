#include <iostream>
using namespace std;
class shape
{
private:
public:
    virtual inline double area()
    {
        return 0;
    }
};

class circle : public shape
{
private:
    int r;

public:
    circle()
    {
        cout << "Enter Radius of the Circle" << endl;
        cin >> r;
    }
    inline double area()
    {
        return 3.14 * r * r;
    }
};

class square : public shape
{
private:
    int b;

public:
    square()
    {
        cout << "Enter Breadth of the Square" << endl;
        cin >> b;
    }
    inline double area()
    {
        return b * b;
    }
};

class triangle : public shape
{
private:
    int h, b;

public:
    triangle()
    {
        cout << "Enter Height and Breadth of the Triangle" << endl;
        cin >> h >> b;
    }
    inline double area()
    {
        return 0.5 * h * b;
    }
};
int main()
{
    square s;
    cout << "Area of the Square " << s.area() << endl;
    triangle t;
    cout << "Area of the Triangle " << t.area() << endl;
    circle c;
    cout << "Area of the Circle " << c.area() << endl;
    return 0;
}