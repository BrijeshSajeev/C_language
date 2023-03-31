#include <iostream>

using namespace std;
int main()
{
    string s = "hello brother";

    string::reverse_iterator it;
    for (it = s.rbegin(); it != s.rend(); it++)
    {
        cout << *it;
    }

    return 0;
}