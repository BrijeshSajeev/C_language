#include <iostream>
using namespace std;
int main()
{
    int row, col, a[10][10], b[10][10], c[10][10];
    cout << "Enter rows and col ::> ";
    cin >> row >> col;
    cout << "Enter the elements below :: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements below :: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "THe addition is ::>  " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}