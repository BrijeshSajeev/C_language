#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char s1[30];
    cout << "ENter name :: > ";
    cin.getline(s1, 30);
    cout << strlen(s1);
   
    return 0;
}