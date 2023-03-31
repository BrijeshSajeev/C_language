#include <iostream>
using namespace std;

int &fun(int &s)
{
    cout << s << endl;
    return s;
}

int main()
{
    int a = 10;
    fun(a) = 90; //which will become a cause it is now its reference 
    cout << a;
    return 0;
}