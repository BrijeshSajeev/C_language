#include <iostream>
using namespace std;
int main()
{
    char s[30];
    char s2[30];
    cout << "Enter name ";
    // cin.getline(s, 30);
    cin.get(s, 30);
    cout << "hellow " << s<<endl;
    cin.ignore();
    cout << "Enter name ";
    // cin.getline(s, 30);
    cin.get(s2, 30);
    cout << "hi " << s2;
    return 0;
}