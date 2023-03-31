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
    shared_ptr<rectangle> p(new rectangle(10, 5));
    shared_ptr<rectangle> m;
    m = p;
    cout << m->area() << endl;
    cout << m.use_count();
    return 0;
}