#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    string s;
    cout << "Enter any thing ";
    getline(cin, s);
    if (s.empty())
    {
        cout << "sorry empty" << endl;
    }
    else
        cout << "not empty" << endl;
    cout << s << endl;

    cout << s.length() << endl;

    cout << s.size() << endl;

    cout << s.capacity() << endl;

    s.resize(50);

    cout << s.capacity() << endl;

    s.clear();

    cout << s.capacity() << endl;

    s.erase();
    cout << s.capacity() << endl;

    return 0;
}