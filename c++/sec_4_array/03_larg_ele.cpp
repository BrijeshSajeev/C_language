#include <iostream>
using namespace std;
int main()
{
    int arr[90], i, n, temp, j;
    cout << "Enter number of elements :: ";
    cin >> n;
    cout << "Enter elemnets ::> ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "THe largest number is " << arr[n - 1];

    return 0;
}