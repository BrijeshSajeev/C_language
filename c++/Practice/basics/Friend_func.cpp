#include <iostream>
using namespace std;

class base
{
private:
    int a;

protected:
    int b;

public:
    int c;
    int sum;
    base()
    {
        a = b = c = sum = 0;
    }
    friend void initialize();
    void add();
};
void base::add()
{
    sum = a + b + c;
    cout << sum;
}
void initialize()
{
    base bo;
    bo.a = 10;
    bo.b = 20;
    bo.c = 30;
    bo.add();
}

int main()
{
    initialize();
    return 0;
}