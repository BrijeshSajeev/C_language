#include <iostream>
#include <sstream>
using namespace std;
int integer(string j)
{
    stringstream ss;
    ss << j;
   
    string temp;
    int found;
    for (int i = 0; i < 7; i++)
    {
        ss >> temp;
    }
    if (stringstream(temp) >> found)
    {
        cout << found << " ";
        temp = " ";
    }
}
int main()
{
    string g = {"12b3r6i"};
    // cout << sizeof(string);
    integer(g);
    return 0;
}