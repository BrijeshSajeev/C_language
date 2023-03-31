#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void parser(string s)
{
    int n = s.length();
    int start = 0, end = 0;
    int i, j;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '>')
        {
            start = i + 1;
            break;
        }
    }
    while (s[start] == ' ')
    {
        start++;
    }
    for (i = start; i < n; i++)
    {
        if (s[i] == '<')
        {
            end = i - 1;
            break;
        }
    }
    for (j = start; j <= end; j++)
    {
        cout << s[j];
    }
    cout << endl;
}

int main()
{
    char input1[] = "<h1>this is a sample code</h1>";
    char input2[] = "<h1>    THis is        with some     space</h1>";

    char input3[] = "<p>This is with some @# % ^ & specal character</p>";
    cout << "Hello" << endl;
    parser(input1);
    cout << "hello 2" << endl;
    parser(input2);
    parser(input3);
    return 0;
}