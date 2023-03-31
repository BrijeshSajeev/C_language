#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int n;
    cout << " no : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cout << "X : ";
    cin >> x;
    int pos;
    cout << "pos : ";
    cin >> pos;
    for (int i = n - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = x;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}