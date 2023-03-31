// finding length of the string
#include <iostream>

using namespace std;
int main()
{
    string s;
    cout << "Enter any name ::> ";
    getline(cin, s);

    int length = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        length++;
    }
    cout << s << " and length is " << length;
    return 0;
}