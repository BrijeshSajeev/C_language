#include <iostream>
using namespace std;
int main()
{
    int a[2][3];
    cout << "Enter the elements below :: ";
    /* for(int i =0;i<2;i++)
     {
         for(int j=0;j<3;j++)
         {
             cin>>a[i][j];
         }
     }*/
    for (auto &x : a)
    {
        for (int &y : x)
        {
            cin >> y;
        }
    }
    cout << "THe elemnts are " << endl;
    for (auto &x : a)
    {
        for (int &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}