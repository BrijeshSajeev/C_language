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
    unique_ptr<rectangle> p(new rectangle(10, 5));
    cout << p->area();
    return 0;
}