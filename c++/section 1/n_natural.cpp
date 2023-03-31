#include <iostream>
using namespace std;
int main()
{
    int sum, n;
    cout << "\nenter the number ::> ";
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << "\nTHE sum of " << n << " natural number is " << sum;
    return 0;
}