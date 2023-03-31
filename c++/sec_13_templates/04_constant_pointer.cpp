#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    int y = 23;
    // int *ptr=&x;
    int *const ptr = &x;
    // ptr = &y;
    cout << *ptr << endl;
    const int *poi = &x;
    //++(*poi);
    poi = &y;
    const int *const pop = &x;
    //++(*pop);
    // pop=&y;

    return 0;
}