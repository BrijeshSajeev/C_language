#include <iostream>
using namespace std;
int main()
{
    int x = 11, y = 7, z;
    z = x & y;
    cout << z << endl;
    z = x | y;
    cout << z << endl;
    z = x ^ y;
    cout << z << endl;
    char f = 5, m;
    m = ~x;
    cout << (int)m << endl;
    int h = 5, d;
    d = h << 1;
    cout << d;
}