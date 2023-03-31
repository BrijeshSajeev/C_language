#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, sum = 0;
    cout << "Enter any numbers ::> ";
    cin >> n;
    while (i <= n)
    {
        cout << i << endl;
        sum += i;
        i++;
    }
    cout << sum;
    return 0;
}