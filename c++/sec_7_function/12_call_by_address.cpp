#include <iostream>

using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "after swap in swap func a and b is " << *a << " " << *b << endl;
}
int main()
{
    int x = 10, y = 20;
    swap(&x, &y);
    cout << "after swap in main x and y is " << x << " " << y << endl;
    return 0;
}