#include<iostream>
using namespace std;

int powr(int a,int b)
{

    int por=1;
    for(int i=1;i<=b;i++)
    {
        por *=a;
    }
    return por;
}


int main()
{   
    int a,b;
    cout<<"Enter the number and its power value ::> ";
    cin>>a>>b;
    cout<<a<<" power "<<b<<" is ::> "<<powr(a,b);
    return 0;
}