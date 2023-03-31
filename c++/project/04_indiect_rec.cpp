#include <iostream>
using namespace std;
int fun(int n)
{
    if (n > 100)
        return n - 10;
    else
        return fun(n + 11);
}

int main()
{

    cout << fun(95) << endl
         << fun(101);

    return 0;
}
