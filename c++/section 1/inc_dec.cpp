#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 10, z;
    z = x++ * y; // x is now multiplied and then it incremented
    cout << z << endl;
    int e = 5, r = 10, f;
    f = ++e * r; // e is incremented to 6 and then multiplied
    cout << f;
}