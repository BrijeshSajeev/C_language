#include <iostream>
using namespace std;
int main()
{
    float bill;
    float dis = 0.0;
    cout << "Enter the bill amount ::> ";
    cin >> bill;
    cout << endl;
    if (bill >= 500)
    {
        dis = bill * 20 / 100;
        cout << "Discount is 20% ::> " << dis;
    }
    else if (bill >= 100)
    {
        dis = bill * 10 / 100;
        cout << "Discount is 10% ::> " << dis;
    }
    else
    {
        dis = bill;
        cout << "NO Discount ::> " << dis;
    }
    return 0;
}