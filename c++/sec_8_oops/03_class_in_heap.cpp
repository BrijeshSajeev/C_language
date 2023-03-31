#include <iostream>
using namespace std;
class rectangle
{
public: // we have to make it as public so we can access it else we cant access it
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
    rectangle *ptr;
    ptr = new rectangle();
    ptr->length = 10;
    ptr->breath = 5;
    cout << ptr->area() << endl;
    cout << ptr->perimeter() << endl;
    delete[] ptr;
    return 0;
}