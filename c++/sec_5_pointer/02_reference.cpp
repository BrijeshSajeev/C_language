#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &y = x;
    cout << x << endl;
    cout << y << endl;
    x = x + y;
    cout << x << endl;
    y++;
    cout << y << endl;
    return 0;
}