#include <iostream>
#include <string.h>
using namespace std;

class String
{
private:
    enum
    {
        sz = 80
    };
    char str[sz];

public:
    String()
    {
        strcpy(str, "");
    }
    String(char s[])
    {
        strcpy(str, s);
    }
    void Display()
    {
        cout << endl;
        cout << str << endl;
    }

    String operator+(String x)
    {
        String temp;
        if ((strlen(str) + strlen(x.str)) < sz)
        {
            strcpy(temp.str, str);
            strcat(temp.str, x.str);
        }

        else
        {
            cout << "\nString over flow";
        }
        return temp;
    }
};

class Counter
{
private:
    unsigned int count;

public:
    Counter()
    {
        count = 0;
    }

    Counter(int c)
    {
        count = c;
    }
    int getCount()
    {
        return count;
    }

    Counter operator++()
    {
        ++count;
        return Counter(count);
    }
};

int main()
{
    // String s1 = "Hello boy ! ";
    // String s2 = "How are you .";
    // s1.Display();
    // s2.Display();
    // String s3;
    // s3 = s1 + s2;
    // s3.Display();

    Counter c1, c2;

    cout << c1.getCount() << " " << c2.getCount() << endl;

    ++c1;
    c2 = ++c1;
    cout << c1.getCount() << " " << c2.getCount();

    return 0;
}