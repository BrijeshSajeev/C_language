#include <iostream>
using namespace std;
class time24
{

private:
    int hr, secs, mins;

public:
    time24()
    {
        hr = mins = secs = 0;
    }

    time24(int h, int m, int s)
    {
        hr = h;
        mins = m;
        secs = s;
    }

    void display()
    {

        if (hr < 10)
        {
            cout << '0';
        }
        cout << hr << " : ";
        if (mins < 10)
        {
            cout << '0';
        }
        cout << mins << " : ";
        if (secs < 10)
        {
            cout << '0';
        }
        cout << secs << endl;
    }
    int gethrs()
    {
        return hr;
    }
    int getmin()
    {
        return mins;
    }
    int getsec()
    {
        return secs;
    }
};

class time12
{
private:
    int hrs;
    int mins, pm;

public:
    time12()
    {
        hrs = mins = 0;
        pm = 1;
    }

    time12(int h, int m, int ap)
    {
        hrs = h;
        mins = m;
        pm = ap;
    }

    time12(time24 t24);

    void Display()
    {
        cout << hrs << " : ";
        cout << mins << " ";
        if (pm == 1)
        {
            cout << "am" << endl;
        }
        else
        {
            cout << "pm" << endl;
        }
    }
    int gethrs()
    {
        return hrs;
    }
};

time12::time12(time24 t24)
{
    int h24 = t24.gethrs();
    // cout << h24 << endl;
    pm = t24.gethrs() < 12 ? 1 : 0;

    mins = t24.getsec() < 30 ? t24.getmin() : t24.getmin() + 1;

    if (mins == 60)
    {
        mins = 0;
        ++h24;
        if (h24 == 12 || h24 == 24)
        {
            pm = (pm == 1) ? 0 : 1;
        }
    }
    hrs = (h24 < 13) ? h24 : h24 - 12;
    if (hrs == 0)
    {
        hrs = 12;
        pm = 1;
    }
}

int main()
{

    int h, m, s;
    cout << "Enter hrs >> ";
    cin >> h;
    cout << "Enter mins >> ";
    cin >> m;
    cout << "Enter secs >> ";
    cin >> s;
    time24 t24(h, m, s);
    t24.display();
    time12 t12 = t24;
    //    cout << t12.gethrs() << endl;
    t12.Display();

    return 0;
}