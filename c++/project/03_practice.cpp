#include <iostream>
using namespace std;
template <class T>
class rectangle
{
private:
    T length;
    T breath;

public:
    rectangle() { length = breath = 1; }
    rectangle(T l, T b);
    T area();
    T perimeter();
};
template <class T>
rectangle<T>::rectangle(T l, T b)
{
    length = l;
    breath = b;
}
template <class T>
T rectangle<T>::area()
{
    return length * breath;
}
template <class T>
T rectangle<T>::perimeter()
{
    return 2 * (length + breath);
}

int main()
{
    rectangle<int> r(3, 7);
    cout << r.area() << endl;
    rectangle<float> f(9.6, 5.3);
    cout << f.perimeter();
    return 0;
}