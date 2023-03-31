#include <iostream>
using namespace std;
int *fun(int s)
{
    int *p = new int[s];
    cout << p << endl;
    for (int i = 0; i < s; i++)
    {
        p[i] = 5 * i;
    }
    return p;
}

int main()
{
    int *q = fun(5);
    cout << q << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << q[i] << endl;
    }

    delete[] q;
    return 0;
}