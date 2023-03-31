#include <iostream>

using namespace std;
int mul(int a, int b, int c = 1)
{
    return a * b * c;
}
int main()
{
    int x = 1, y = 2, z = 20;

    cout << "x*y*z = " << mul(x, y, z) << endl;
    cout << " x*y = " << mul(x, y);
    return 0;
}