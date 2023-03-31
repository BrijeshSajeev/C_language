#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
float sub(float a, float b)
{
    return a - b;
}
int main()
{
    int a = 10, b = 30, c;
    float d = 9.7, e = 2.98, f;
    c = add(a, b);
    cout << c << endl;
    f = sub(d, e);
    cout << f << endl;
    return 0;
}