#include <iostream>
#include <memory>
using namespace std;
class rectangle
{
public:
    int len;
    int ber;
    rectangle(int a, int b)
    {
        len = a;
        ber = b;
    }
    int area()
    {
        return len * ber;
    }
};

int main()
{
    weak_ptr<rectangle> p;
    return 0;
}