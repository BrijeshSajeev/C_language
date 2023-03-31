#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    long int b;
    char c;
    float d;
    double e;
    // cin >> a >> b >> c >> d >> e;
    cin >> d >> e;
    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;
    // cout << d << endl;
    // cout << setprecision(9) << e;
    cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(9) << e;
    return 0;
}