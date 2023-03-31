#include <iostream>
using namespace std;

int factorial(int f)
{
    if (f == 1 || f == 0)
    {
        return 1;
    }
    else
        return f * factorial(f - 1); // calling itself again again until the condition satisfied
}

int main()
{
    int x = 5;
    cout << factorial(x);
    return 0;
}