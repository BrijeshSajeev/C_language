#include <iostream>
using namespace std;

int search(int *a, int b, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (b == a[i])
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int n, x;
    cout << "Enter the element to be searched ";
    cin >> n;
    int a[n];
    cout << "Enter the elements below " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the elements to be searched ";
    cin >> x;
    int result = search(a, x, n);
    if (result == 0)
        cout << "not found";
    else

        cout << "element present in the location " << result + 1;
    return 0;
}