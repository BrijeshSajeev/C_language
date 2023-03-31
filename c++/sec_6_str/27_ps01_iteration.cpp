// finding length using iteration in string
#include <iostream>

using namespace std;
int main()
{
    string s;
    cout << "Enter any name ";
    getline(cin, s);

    string::iterator it;
    int cont = 0;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it;
        cont++;
    }
    cout << " length is " << cont;
    return 0;
}