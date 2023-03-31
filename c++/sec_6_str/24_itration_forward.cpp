#include <iostream>


using namespace std ;
int main()
{
    string s="hello brother";
 
string::iterator it;
for(it=s.begin();it!=s.end();it++)
{
     //cout<<*it;
     *it=*it-32;
}
 
 cout<<s;
    return 0;
}