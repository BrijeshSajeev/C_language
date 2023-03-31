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
    while (i < n)
    {

        if (x == arr[i])
        {

            cout << "The serached element is " << arr[i] << " in the position ::> " << i + 1;
            exit(0);
        }

        i++;
    }
    cout << "not present";

    return 0;
}