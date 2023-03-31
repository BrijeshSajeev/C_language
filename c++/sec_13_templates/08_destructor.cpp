#include <iostream>
using namespace std;
class base
{
private:
    int a;
    int b;

public:
    virtual ~base()
    {
        cout << "destructor of base";
    }
};
class derived : public base
{
public:
    derived()
    {

        cout << "Constructor of derived" << endl;
    }
    ~derived()
    {

        cout << "Dsetructor of derived" << endl;
    }
};
void fun()
{
    base *p = new derived();
    delete p;
}

int main()
{
    fun();
    return 0;
}