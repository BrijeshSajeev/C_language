#include <iostream>
using namespace std;
class base
{
public:
    void func1()
    {
        cout << "func of base" << endl;
    }
};
class derived : public base
{
public:
    void func1()
    {
        cout << "func from derived " << endl;
    }
};

int main()
{
    derived d;
    d.func1();
    base *b = new derived();
    b->func1();
    return 0;
}