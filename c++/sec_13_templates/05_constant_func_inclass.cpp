#include <iostream>
using namespace std;

class base
{
public:
    int x;
    void display() const
    {
        //++x;
        cout << x << endl;
    }
};

int main()
{
    base s;
    s.x = 290;
    s.display();
    return 0;
}