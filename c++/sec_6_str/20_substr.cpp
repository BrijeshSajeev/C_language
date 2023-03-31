#include <iostream>

using namespace std;
int main()
{
    // it will take out a part of string
    string s = "programming";

    cout << s.substr(3) << endl;

    // we can adjust the size

    cout << s.substr(3, 4);
    return 0;
}