#include <iostream>

using namespace std;
int main()
{
    string s = "hello";
    cout << s << endl;
    s.push_back('f'); // it will add one char at the end
    cout << s << endl;

    string m = "wowj";
    cout << m << endl;
    m.pop_back(); // it will delete one char at the end

    cout << m << endl;
    return 0;
}