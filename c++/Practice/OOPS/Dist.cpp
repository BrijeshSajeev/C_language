#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inch;

public:
    Distance()
    {
        feet = inch = 0;
    }
    void setData(int f, float in)
    {
        feet = f;
        inch = in;
    }

    void Display()
    {
        cout << endl;
        cout << feet << " ft " << inch << " inch." << endl;
    }

    void add_dist(Distance d1, Distance d2);
    void avrg(Distance d, int divi);
};

void Distance::add_dist(Distance d1, Distance d2)
{
    inch = d1.inch + d2.inch;
    feet = d1.feet + d2.feet;

    if (inch >= 12)
    {
        inch -= 12.0;
        feet++;
    }
}

void Distance::avrg(Distance d, int divi)
{
    float ft = d.feet + (d.inch / 12.0);

    ft /= divi;
    cout << ft << endl;
    feet = int(ft);

    inch = (ft - feet) * 12.0;
}

int main()
{

    int ch = 0;
    Distance d[20];
    int ft, in;
    Distance total, average;
    int count = 0;
    do
    {
        cout << "Enter the feet >> ";
        cin >> ft;
        cout << "Enter the inch >> ";
        cin >> in;
        d[count++].setData(ft, in);

        cout << "Enter your choice (0/1) >> ";
        cin >> ch;

    } while (ch == 0);

    for (int i = 0; i < count; i++)
    {
        total.add_dist(total, d[i]);
    }
    average.avrg(total, count);
    total.Display();
    cout << endl;
    average.Display();

    return 0;
}