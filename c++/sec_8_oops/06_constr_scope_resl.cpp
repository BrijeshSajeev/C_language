#include <iostream>
using namespace std;

class test
{
public:
    int x;
    int display();
};
int test::display() //(::) scope resolution oprator
{
    cout << x << endl;
    return 0;
}
int main()
{
    test y;
    y.x = 100;
    y.display();
}