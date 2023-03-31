#include <iostream>

using namespace std;
// int add(int a, int b, int c = 0)or
// int add(int a, int b=0, int c = 0)
int add(int a = 0, int b = 0, int c = 0)
{
    return a + b + c;
}
int main()
{
    int x = 10, y = 20, z = 90;
    cout << add() << endl;
    cout << add(10) << endl;
    cout << "x+y = " << add(x, y) << endl;
    cout << "x+y+z = " << add(x, y, z);
    return 0;
}