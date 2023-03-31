#include <iostream>
using namespace std;
enum day
{
    mon = 1,
    tue,
    wed,
    thr,
    fri,
    sat,
    sun
};
int main()
{
    day d;
    d = tue;
    cout << d;
    return 0;
}