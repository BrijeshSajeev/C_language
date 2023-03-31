#include <iostream>

using namespace std;
int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
float add(float a, float b)
{
    return a + b;
}
int main()
{
    int a = 90, b = 10, c, d;
    float x = 3.4, y = 4.9, z;
    c = add(a, b);
    d = add(a, b, c);
    cout << c << " a+b+c = " << d << endl;
    z = add(x, y);
    cout << z << endl;
    return 0;
}