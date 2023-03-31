#include <iostream>
//#include <Stack.cpp>
using namespace std;
class Rational
{
private:
    int p, q;

public:
    Rational(int a = 1, int b = 1) : p(a), q(b)
    {
    }

    Rational operator+(Rational r)
    {
        Rational temp;
        temp.p = p * r.q + r.p * q;
        temp.q = q * r.q;
        return temp;
    }
    friend ostream &operator<<(ostream &out, Rational x);
    friend istream &operator>>(istream &in, Rational &y);
};
ostream &operator<<(ostream &out, Rational x)
{
    out << x.p << "\\" << x.q;
    return out;
}

istream &operator>>(istream &in, Rational &y)
{
    cout << "Enter p >> ";
    in >> y.p;
    cout << "Enter q >> ";
    in >> y.q;
    return in;
}

int main()
{
    Rational r1, r2, r3;
    cin >> r1 >> r2;
    cout << r1 << endl;
    cout << r2 << endl;
    r3 = r1 + r2;
    cout << r3 << endl;

    return 0;
}