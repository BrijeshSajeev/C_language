#include <iostream>
using namespace std;
class parent
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void funcparent()
    {
        a = 10;
        b = 15;
        c = 90;
    }
};
// class child:public parent
// class child:protected parent
class child : private parent
{
public:
    void funcchild()
    {
        // a=10;
        b = 20;
        c = 30;
    }
};
class grandchild : public child
{
public:
    void func()
    {
        // a=10;
        // b=20;
        // c=30;
    }
};

int main()
{
    grandchild g;
    // g.a=10;
    // g.b=20;
    // g.c=30;
    return 0;
}