#include <iostream>
using namespace std;
class rectangle
{
public: //we have to make it as public so we can access it else we cant access it 
    int length;
    int breath;

    int area()
    {
        return length * breath;
    }
    int perimeter()
    {
        return 2 * (length + breath);
    }
};
int main()
{
    rectangle r;
    r.length = 10;
    r.breath = 5;
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    return 0;
}