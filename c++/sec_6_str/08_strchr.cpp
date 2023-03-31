#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char s1[30] = "programming";

    cout << strchr(s1, 'g') << endl;
    char s2[30] = "programming";
    cout << strchr(s2, 'r') << endl;

    char s3[30] = "programming";
    cout << strrchr(s3, 'm') << endl;
    char s4[30] = "programming";
    cout << strrchr(s4, 'g') << endl;

    return 0;
}