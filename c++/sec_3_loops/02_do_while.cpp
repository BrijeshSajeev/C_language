#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "Enter any number ::> ";
    cin >> n;
    cout << endl;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= n);
    return 0;
}