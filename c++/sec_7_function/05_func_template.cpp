#include <iostream>
using namespace std;
template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int m = 90, n = 10;
    float x = 2.8, y = 3.5;
    cout << "integer sum = " << add(m, n) << endl;
    cout << "float sum = " << add(x, y);
    return 0;
}