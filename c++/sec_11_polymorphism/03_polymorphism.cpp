#include <iostream>
using namespace std;

class car // abstract class
{
public:
    virtual void start() = 0; // pure virtual function
};
class audi : public car
{
public:
    void start()
    {
        cout << "audi started " << endl;
    }
};
class benz : public car
{
public:
    void start()
    {
        cout << "Benz started " << endl;
    }
};
int main()
{
    car *c = new audi();
    c->start();
    c = new benz();
    c->start();
    return 0;
}