#include <iostream>
using namespace std;

class rectangle
{
public:
    int length;
    int breath;
    int area()
    {
        cout << "inline function" << endl;
        return length * breath;
    }
    int perimeter();
};
int rectangle::perimeter()
{
    cout << "non inline function" << endl;
    return 2 * (length + breath);
}

int main()
{
    rectangle r;
    r.length = 20;
    r.breath = 30;
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    return 0;
}