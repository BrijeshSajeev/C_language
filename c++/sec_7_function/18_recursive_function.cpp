#include <iostream>
using namespace std;

int func(int f)
{
    if (f > 0)
    {
        func(f - 1);
        cout << f << endl;
        // func(f - 1);
    }
    return 0;
}

int main()
{
    int x = 5;
    func(x);

    return 0;
}