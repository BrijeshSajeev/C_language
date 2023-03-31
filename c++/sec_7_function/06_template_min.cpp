#include <iostream>

using namespace std;
template <class T>
T mini(T a, T b)
{
    if (a < b)
        return a;
    else
        return b;
}
int main()
{
    int a, b;
    cout << "Enter two numbers ::> ";
    cin >> a >> b;
    float x, y;
    cout << "Enter two numbers ::> ";
    cin >> x >> y;
    cout << "smaller integer is >> " << mini(a, b) << endl;
    cout << "smaller float is >> " << mini(x, y);
    return 0;
}