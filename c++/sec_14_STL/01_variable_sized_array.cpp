#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n >> q;

    vector<int> a[n];

    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int val_a_i_j;
            cin >> val_a_i_j;
            a[i].push_back(val_a_i_j);
        }
    };

    for (int i = 0; i < q; i++)
    {
        int a_i, j;
        cin >> a_i >> j;
        cout << a[a_i][j] << '\n';
    }

    return 0;
}
