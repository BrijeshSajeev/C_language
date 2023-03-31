#include <iostream>
using namespace std;
class base
{
private:
    int a;
    int b;

public:
    static int count;
    base()
    {
        a = 10;
        b = 20;
        count++;
    }
    int getcount()
    {
        return count;
    }
};
int base::count = 0;

int main()
{
    base b;
    base c;
    base d;
    base e;
    cout << e.getcount() << endl;
    return 0;
}