#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, d, r1, r2;
    cout << "Enter a,c,b ::> ";
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (d == 0)
    {
        cout << "Roots are equal and real";
        cout << endl
             << (-b / (2 * a));
    }
    else if (d > 0)
    {
        cout << "Roots are unequal and real";
        cout << endl
             << (-b + sqrt(d)) / (2 * a) << endl
             << (-b - sqrt(d)) / (2 * a);
    }
    else
    {
        cout << "Roots are imaginary";
    }
    return 0;
}