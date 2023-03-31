#include <iostream>

using namespace std;
int mini(int a, int b, int c)
{
    return a < b && a < c ? a : (b < c ? b : c);
}
int main()
{
    int x = 18, y = 90, z = 1;
    // cout << mini() << endl;
    // cout << mini(x) << endl;
    // cout << mini(x, y) << endl;
    cout << mini(x, y, z) << endl;
    return 0;
}