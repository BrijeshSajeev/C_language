#include <iostream>
using namespace std;
class base
{
public:
    int x;
    void show()
    {
        cout << x << endl;
    }
};
class derived : public base
{
public:
    int y;
    void dispaly()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    base b;
    b.x = 28;
    b.show();
    derived d;
    d.x = 45;
    d.y = 50;
    d.dispaly();
    derived f;
    f.x = b.x + d.y + d.x;
    // cout << f.x;
    f.show();
    return 0;
}