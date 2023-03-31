#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, rem = 0;
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
           sum += rem;
    }
 
    cout << "\n sum " << sum;
    return 0;
}