#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex(int real = 1, int img = 1)
    {
        this->real = real;
        this->img = img;
    }

    friend complex operator+(complex c1, complex c2);
    friend ostream &operator<<(ostream &out, complex c);
};
ostream &operator<<(ostream &out, complex c)
{
    out << c.real << "+i" << c.img << endl;
}
complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int main()
{
    complex c1(20, 9), c2(4, 11), c3;
    c3 = c1 + c2;
    cout << c3;
    operator<<(cout, c3);
    return 0;
}