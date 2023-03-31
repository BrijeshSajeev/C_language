#include <iostream>
using namespace std;

class shape
{
public:
    virtual int area() = 0;
    virtual int perimeter() = 0;
};
class rectangle : public shape
{
private:
    int length;
    int breath;

public:
    rectangle(int l = 1, int b = 1)
    {
        length = l;
        breath = b;
    }
    int area()
    {
        return length * breath;
    }
    int perimeter()
    {
        return 2 * (length + breath);
    }
};
class circle : public shape
{
private:
    int radius;

public:
    circle(int r = 1)
    {
        radius = r;
    }
    int area() { return 3.14 * radius * radius; }
    int perimeter() { return 2 * 3.14 * radius; }
};

int main()
{
    shape *s = new rectangle(5, 4);
    cout << "The area of the rectangle = " << s->area() << endl;
    cout << "The perimeter of the rectangle = " << s->perimeter() << endl;
    s = new circle(8);
    cout << "The area of the circle = " << s->area() << endl;
    cout << "The perimeter of the circle = " << s->perimeter() << endl;

    return 0;
}