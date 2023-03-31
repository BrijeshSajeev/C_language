#include <iostream>
using namespace std;
int g = 0; // global variable
void fun()
{
    int a = 10; // local variable
    g++;
    cout << a << " " << g << endl;
}

int main()
{
    int x = 20; // local variable
    fun();
    fun();
    fun();
    cout << x + g << endl;
    return 0;
}