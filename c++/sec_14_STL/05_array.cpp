/*
syntax   std:array<T,N>

notice:
1.it is a container that encapsulation fixed size array
2.array =size is needed at compile time
3.access Elements:
a.at()
b.[]
c.front()
d.back()
e.data() //gives access to the underlying array
*/
#include <iostream>
#include <array>
using namespace std;

int main()
{
    std::array<int, 5> a = {2, 3, 4, 5, 6};
    std::array<int, 7> m;
    m = {9, 99, 88, 7, 66, 55, 44};
    array<int, 5>::iterator itr;
    for (itr = a.begin(); itr != a.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout<<endl;
    cout << m.at(3) << endl;
    cout << m.front() << endl;
    cout << m.back();
    return 0;
}