#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "ENter a,b";
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw 1;
        c = a / b;
        cout << "Divivsion of a by b is " << c << endl;
    }
    catch (int e)

    {
        cout << "Division by zero" << endl;
    }

    return 0;
}