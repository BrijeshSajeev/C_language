#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> v; // doubly linked list
    // forward_list<int>   : singly linked list
    v.push_back(23);
    v.push_back(30);
    v.push_back(36);
    v.push_back(32);
    list<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }

    return 0;
}