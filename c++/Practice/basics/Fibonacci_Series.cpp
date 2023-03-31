#include <iostream>
using namespace std;

long int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    // time complixity O(2^n)
}

// Using Memoization
int F[100];
long int fib(int n)
{
    ;

    if (n < 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
        {
            F[n - 2] = fib(n - 2);
        }
        if (F[n - 1] == -1)
        {
            F[n - 1] = fib(n - 1);
        }

        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{

    int b;
    b = fibonacci(10);
    cout << b << endl;
    b = fib(10);
    cout << b * -1 << endl;

    return 0;
}
