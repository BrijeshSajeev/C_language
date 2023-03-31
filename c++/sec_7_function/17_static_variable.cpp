#include <iostream>
using namespace std;
int g = 0;
void fun()
{
    static int s = 10;
    // static variable,which cannot be deleted till end of the program,but it can be accesssed by this func only

    int a = 10;
    s++;
    cout << a << " " << s << endl;
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}