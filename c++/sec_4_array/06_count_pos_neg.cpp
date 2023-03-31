#include <iostream>
using namespace std;
int main()
{
    int a[] = {-1, 3, -45, 4, 7, -34, -90, 7, 4, 88, -67};
    int poscount = 0, nagcount = 0;
    for (auto x : a)
    {
        if (x < 0)
        {
            nagcount++;
        }
        else
        {
            poscount++;
        }
    }
    cout << "negative -> " << nagcount << "\npositive -> " << poscount;
    return 0;
}