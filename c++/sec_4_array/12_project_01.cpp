#include <iostream>
using namespace std;
int main()
{
    int a[100], sum = 0, average = 0, n;
    cout << "ENter number of elements ::>";
    cin >> n;
    cout << "Enter the elements below :: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << "Sum of all elements = " << sum << endl;
    average = sum / n;
    cout << "The average of the elemnts :: > " << average;

    return 0;
}