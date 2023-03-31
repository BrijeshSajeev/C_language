#include <iostream>
#include <sstream>
using namespace std;
int countwords(string st)
{
    stringstream s(st);
    string word;
    int count = 0;
    while (s >> word)
    {
        count++;
    }
    return count;
}

int main()
{
    string s = "I am a programmer and i like programming";
    cout << "no.of words : " << countwords(s) << endl;
    
    return 0;
}