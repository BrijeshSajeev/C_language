#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char s1[30];
    char s2[30];
    cout << "ENter name :: > ";
    cin.getline(s1, 30);
    // cout << "ENter name :: > ";
    // cin.getline(s2, 30);
    strcpy(s2, s1);
    cout << s2 << endl;
    cout << strlen(s1) << endl;
    char s3[30];
    char s4[30];
    cout << "ENter name :: > ";
    cin.getline(s3, 30);
    strncpy(s4, s3, 6);
    cout << s4;

    return 0;
}