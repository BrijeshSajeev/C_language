// to find the user name
#include <iostream>

using namespace std;
int main()
{
    string s;
    cout << "enter your email address ::> ";
    getline(cin, s);
    cout << s << endl;

    // s.find('@');
    cout << "user name is ::> " << s.substr(0, s.find('@'));

    return 0;
}