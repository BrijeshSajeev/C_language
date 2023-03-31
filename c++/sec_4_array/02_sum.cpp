#include <iostream>
using namespace std;
int main()
{
    int arr[5], sum = 0;
    cout << "Enter elemnets ::> ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (auto x : arr)
    {
        sum += x;
    }
    cout << "sum is " << sum;
    return 0;
}