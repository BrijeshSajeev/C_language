#include <iostream>
using namespace std ;
class base
{
 public:
 base()
 {
     cout<<"default of base"<<endl;
 }
 base(int x)
 {
     cout<<"parameter of base "<<x<<endl;
 }
};
class derived:public base{
    public:
    derived()
    {
        cout<<"default of derived "<<endl;
    }
    derived(int a)
    {
        cout<<"parameter of derived "<<a<<endl;
    }
    derived(int x,int y):base(x)
    {
     cout<<"parameter of derived "<<y<<endl;   
    }
};

int main()
{
 //derived d;  
// derived f(2);
derived d(7,8);
derived f(7);
    return 0;
}