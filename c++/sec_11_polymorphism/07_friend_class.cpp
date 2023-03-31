#include <iostream>
using namespace std;
class your;
class my
{
public:
    int a = 29;
    friend your;
};
class your
{
public:
    my m;
    void fun()
    {
        cout << m.a << endl;
    }
};
int main()
{
    my s;
    your y;
    y.fun();
    cout << s.a << endl;
    return 0;
}