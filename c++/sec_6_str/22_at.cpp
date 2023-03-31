#include <iostream>


using namespace std ;
int main()
{
    string s="hello mother and father";
   
   cout<<s.at(4)<<endl;
   cout<<s[4]<<endl;//with this we can write also
    s[4]='l';
    cout<<s;


   
    return 0;
}