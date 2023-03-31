// to count number of vowels in a sentence
#include <iostream>

using namespace std;
int main()
{
    string s;
    cout << "ENter any sentence ::> ";
    getline(cin, s);
    int vowel = 0;
    int space = 0;
    int constants = 0;
    string::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u' || *it == 'A' || *it == 'E' || *it == 'I' || *it == 'O' || *it == 'U')
        {
            vowel++;
        }
        else if (*it == ' ')
        {
            space++;
        }
        else
            constants++;
    }
    cout << "vowles = " << vowel << "  space = " << space << "  constants = " << constants;
    return 0;
}