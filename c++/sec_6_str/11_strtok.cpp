#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    char s[] = "x=10;y=20;z=30";
    // cout << strtok(s, "=;") << endl;
    char *p = strtok(s, "=;");
    while (p != NULL)
    {
        cout << p << endl;
        p = strtok(NULL, "=;");
    }

    return 0;
}