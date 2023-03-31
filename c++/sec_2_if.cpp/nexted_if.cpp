#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a, b, c ::> ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "\nA is greater ";
    }
    else if (b > a && b > c)
    {
        cout << "\nB is greater ";
        
    }
    else
    {
        cout << "\nC is greater";
    }
    return 0;
}