#include <iostream>
using namespace std;
class complex
{
protected:
public:
    int real, img;

    complex(int a = 0, int b = 0) : real(a), img(b)
    {
    }

    complex operator+(complex x)
    {
        complex r;
        r.real = real + x.real;
        r.img = img + x.img;
        // cout << r.real << " + i" << r.img;

        return r;
    }
    friend ostream &operator<<(ostream &o, complex x);
    friend istream &operator>>(istream &i, complex &y);
};
ostream &operator<<(ostream &o, complex x)
{
    cout << x.real << " + i" << x.img;
    return o;
}
istream &operator>>(istream &i, complex &y)
{
    cout << "Enter the real part >> ";
    cin >> y.real;
    cout << "Enter the img part >>";
    cin >> y.img;
    return i;
}
int main()
{
    // complex c1(8, 3);
    // complex c2(2, 2);
    // complex c3;
    complex c1, c2, c3;
    cin >> c1 >> c2;
    cout << c1 << endl;
    cout << c2 << endl;

    c3 = c1 + c2;
    cout << c3;
    return 0;
}