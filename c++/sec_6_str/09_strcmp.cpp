#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char s1[30];
    cout << "ENter name :: > ";
    cin.getline(s1, 30);

    char s2[30];
    cout << "ENter name :: > ";
    cin.getline(s2, 30);
    cout << strcmp(s1, s2) << endl;
    return 0;
}