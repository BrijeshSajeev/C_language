#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    float y = 9.33;
    decltype(y) z = x + y;
    cout << z;
    return 0;
}