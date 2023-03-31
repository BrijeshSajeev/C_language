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
    if (strstr(s1, s2) != NULL)
    {
        cout << strstr(s1, s2);
    }
    else
        cout << "not found ";
    return 0;
}