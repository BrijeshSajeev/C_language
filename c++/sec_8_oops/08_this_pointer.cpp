#include <iostream>
using namespace std;

class test
{

    // int value;

public:
    int value;
    void func(int value)
    {
        this->value = value;
        cout << this->value;
    }
};

int main()
{
    test r;
    r.func(100);

    return 0;
}