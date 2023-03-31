#include <iostream>
using namespace std;
class base
{
private:
    int x;

protected:
    int y;

public:
    int z;
    int fucbase()
    {
        x = 10;
        y = 20;
        z = 30;
        }
};
class derived : public base
{
public:
    int funderi()
    {
        // x=10; //private cannot accessed
        y = 20; // protected can be accessed
        z = 30; // public can be accessed
    }
};

int main()
{
    base b;
    // b.x=10;//private cannot accessed
    // b.y=20;//protected cannot accessed
    b.z = 100; // public can be accessed;

    return 0;
}