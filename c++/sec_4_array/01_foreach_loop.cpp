#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter elemnets ::> ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements are : ";
    for (auto x : arr)
    {
        cout << x << endl;
    }
    return 0;
}