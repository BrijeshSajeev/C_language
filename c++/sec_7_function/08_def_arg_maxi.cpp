#include <iostream>

using namespace std;
int maxi(int a = 0, int b = 0, int c = 0)
{
    return a > b && a > c ? a : (b > c ? b : c);
}
int main()
{
    int x = 18, y = 90, z = 1;
    cout << maxi() << endl;
    cout << maxi(x) << endl;
    cout << maxi(x, y) << endl;
    cout << maxi(x, y, z) << endl;
    return 0;
}