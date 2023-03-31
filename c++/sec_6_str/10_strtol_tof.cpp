#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    char s1[29] ="245";
    char s2[20] = "50.34";
    cout << strtol(s1, NULL, 10) << endl;
    cout << strtof(s2, NULL);

    return 0;
}