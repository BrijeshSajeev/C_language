#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breath;

public:
    /*rectangle ()//non parametersized constructors
    {
        length=1;
        breath=1;
    }*/
    rectangle(int l = 1, int b = 1) // parametersized constructors
    {
        setlen(l);
        setbreath(b);
    }
    rectangle(rectangle &re) // copyconstructors
    {
        length = re.length;
        breath = re.breath;
    }
    int setlen(int l) // mutator
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
    int getlen() // accessors
    {
        return length;
    }
    int getbreath()
    {
        return breath;
    }
    int area() // facilitators
    {
        return length * breath;
    }
    int perimeter()
    {
        return 2 * (length + breath);
    }
    bool square();
    ~rectangle();
};
bool rectangle::square() // inspector
{
    return length == breath;
}
rectangle::~rectangle() // destructor
{
    cout << "rectangle destroyed";
}
int main()
{
    rectangle r(10);
    rectangle r2(10, 10);

    cout << r.area() << endl;

    cout << r2.area() << endl;
    rectangle r3(r2);
    cout << r3.area() << endl;
    if (r2.square())
    {
        cout << "it is a square" << endl;
    }

    return 0;
}
