#include <iostream>
using namespace std;

int main()
{
    []()
    { cout << "hello world\n"; }();
    [](int x, int y)
    { cout << "sum ;" << x + y << endl; }(10, 5);
    int x = [](int a, int b)
    { return a + b; }(10, 20);
    cout << endl;
    auto f = []()
    { cout << "hello\n"; };
    f();
    int s = 28, m = 90;
    [&s, &m]()
    { cout << s << m << endl; }();

    return 0;
}