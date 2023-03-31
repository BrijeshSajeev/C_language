#include <iostream>
using namespace std;
int main()
{
    int n, r, m, rev=0;
    cout << "Enter any number ::> ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev + r * r * r;
    }
    if (m == rev)
    {
        cout << "armstrong number";
    }
    else
        cout << "not armstrong number";
        return 0;
}