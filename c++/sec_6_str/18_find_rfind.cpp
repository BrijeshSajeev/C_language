#include <iostream>

using namespace std;
int main()
{
    string s = "hello mother and father";

    cout << s.find('e') << endl; // it staarts searching from left side ------->

    cout << s.rfind('e') << endl; // it starts searching from right side <------

    
    return 0;
}