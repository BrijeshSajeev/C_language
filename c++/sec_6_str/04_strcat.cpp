#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char s1[30];
    char s2[30];
    cout << "ENter name :: > ";
    cin.getline(s1, 30);
    cout << "ENter name :: > ";
    cin.getline(s2, 30);
    strcat(s1, s2);
    cout << s1 << endl;
    cout << strlen(s1) << endl;
    char s3[30];
    char s4[30];
    cout << "ENter name :: > ";
    cin.getline(s3, 30);
    cout << "ENter name :: > ";
    cin.getline(s4, 30);
    strncat(s3, s4, 5);
    cout << s3;

    return 0;
}