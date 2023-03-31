#include <iostream>
using namespace std;
int main()
{
    int a[]{1, 2, 3, 4, 5, 6};
    int *p = a;
    p++;
    cout << *p << endl;
    p--;
    for (int i = 0; i < 6; i++)
    {
        // cout << i[a] << " ";
        // cout << *(p + i) << " " << endl;
        // cout << *(a + i) << " " << endl;
        // cout << i[p] << " " << endl;
        cout << p[i] << " " << endl;
    }
    int *q = &a[4];
    int d = q - p;
    cout << d << endl;
    return 0;
}