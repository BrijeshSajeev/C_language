#include <iostream>
using namespace std ;
template <class t>
t maxi(t x,t y)
{
    return x>y?x:y;
}
int main()
{
    int a=10,b=30;
    cout<<maxi(a,b)<<endl;
    return 0;
}