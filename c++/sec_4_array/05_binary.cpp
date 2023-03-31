#include <iostream>
using namespace std;
int main()
{
    int arr[100], n, i = 0, x;
    cout << "Enter number of elements :: ";
    cin >> n;
    cout << "Enter elemnets ::> ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched :: ";
    cin >> x;
    int mid, low = 0, high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            cout << "The location is > " << mid + 1;
            return 0;
        }
        else if (x > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "NOt found";
    return 0;
}