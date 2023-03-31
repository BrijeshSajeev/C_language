#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breath;

public:
    int setlen(int l)
    {
        if (l >= 0)
        {
            length = l;
        }
        else
        {
            cout << "not proper";
            length = 1;
        }
    }
    int setbreath(int b)
    {
        if (b >= 0)
        {
            breath = b;
        }
        else
        {
            cout << "not proper";
            breath = 1;
        }
    }
    int getlen()
    {
        return length;
    }
    int getbreath()
    {
        return breath;
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
int main()
{
    rectangle r;
    // r.length=90;cnt accessed cause it is private
    r.setlen(10);
    r.setbreath(5);
    cout << r.getlen() << endl;
    cout << r.getbreath() << endl;
    cout << r.area() << endl;

    cout << r.perimeter() << endl;
    return 0;
}
