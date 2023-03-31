// palindrome or not
#include <iostream>

using namespace std;
int main()
{
    string s;
    cout << "Enter any name ::> ";
    getline(cin, s);
    string rev;
    int len = s.length();
    rev.resize(len);
    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        rev[i] = s[j];
    }
    cout << rev << endl;

    if (s.compare(rev) == 0)
    {
        cout << "paliandrome";
    }
    else
        cout << "not paliandrome";

    return 0;
}