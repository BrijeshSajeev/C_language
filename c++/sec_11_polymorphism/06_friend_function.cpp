#include <iostream>
using namespace std;
class base
{
private:
    int a;

public:
    int b;

public:
    int c;
    friend void func();
};
void func()
{
    base b;
    b.a = 10;
    b.b = 20;
    b.c = 22;
}

int main()
{

    return 0;
}