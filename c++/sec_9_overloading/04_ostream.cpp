#include <iostream>
using namespace std;
class print
{
public:
    int a;

    friend iostream &operator>>(iostream &in, print &a);
};
iostream &operator>>(iostream &in, print &a)
{
    in >> a;
}

int main()
{
    print f, m;
    // cin >> f.a;
    m = f;
    //operator>>(cin, m);
    cout << f.a;
    return 0;
}