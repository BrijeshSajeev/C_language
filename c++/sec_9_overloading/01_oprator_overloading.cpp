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
    complex operator+(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main()
{
    complex c1(5, 9), c2(4, 1), c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}