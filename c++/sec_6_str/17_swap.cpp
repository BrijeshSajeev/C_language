#include <iostream>

using namespace std;
int main()
{
    string s = "hello";
    string m = "world";
    s.swap(m);
    cout << s << endl
         << m;
    return 0;
}