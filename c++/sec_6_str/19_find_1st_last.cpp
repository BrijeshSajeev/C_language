#include <iostream>

using namespace std;
int main()
{
    string s = "hello mother and father";

    cout << s.find_first_of('e') << endl; // it starts from left side ------->

    cout << s.find_last_of('e') << endl; // it starts from right side <------
    return 0;
}