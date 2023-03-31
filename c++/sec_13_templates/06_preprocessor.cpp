#include <iostream>
using namespace std;
#define PI 3.145
#define max (x > y ? x : y)
#define O cout
#define sqt(x) (x * x)
int main()
{
    O << PI << endl;
    int x = 20, y = 2;
    O << max << endl;
    O << sqt(y) << endl;
    return 0;
}