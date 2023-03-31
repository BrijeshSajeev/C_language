#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "brijesh";
    m[2] = "jenly";
    m.insert(pair<int, string>(3, "sherbin"));
    m.insert(pair<int, string>(4, "navneeth"));
    map<int, string>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    cout << m[2];

    return 0;
}