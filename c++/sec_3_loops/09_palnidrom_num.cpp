#include <iostream>
using namespace std;
int main()
{
    int n, m, r, rev = 0;
    cout << "Enter any number ::> ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    if (m == rev)
        cout << "Palindrom number ";
    else
        cout << "not palindrome number ";
    return 0;
}