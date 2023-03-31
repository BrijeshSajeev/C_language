#include <iostream>
using namespace std;
int main()
{
    char c = 127;
    ++c;
    cout << (int)c << endl;
    char d = -128;
    --d;
    cout << (int)d << endl;
    d -= 5;
    cout << (int)d;

    return 0;
}