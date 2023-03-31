#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "ENter your name ::> ";
    // cin >> name;
    getline(cin, name);

    cout << "HI " << name << " \t asshole ! ";
    return 0;
}