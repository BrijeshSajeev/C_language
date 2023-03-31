// Rational numbers
#include <iostream>
using namespace std;
class rational
{
private:
    int p;
    int q;

public:
    rational()
    {
        p = 1;
        q = 1;
    }
    rational(int p, int q)
    {
        this->p = p;
        this->q = q;
    }
    rational(rational &r)
    {
        this->p = r.p;
        this->q = r.q;
    }
    rational operator+(rational r)
    {
        rational t;
        t.p = this->p * r.q + this->q * r.p;
        t.q = this->q * r.q;
        return t;
    }
    friend ostream &operator<<(ostream &out, rational r);
};
ostream &operator<<(ostream &out, rational r)
{
    out << r.p << "/" << r.q;
    return out;
}
int main()
{
    rational r1(5, 3), r2(2, 5), r3;
    r3 = r1 + r2;
    cout << r3;
    return 0;
}