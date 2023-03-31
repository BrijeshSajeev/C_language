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
    void display()
    {
        cout << real << "+i" << img;
    }
    friend complex operator+(complex c1, complex c2);
};
complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int main()
{
    complex c1(5, 9), c2(4, 1), c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}