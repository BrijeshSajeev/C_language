// add string at the end
#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    string s = "hello";
    cout << s << endl;
    s.append(" world ");
    cout << s << endl;
    return 0;
}