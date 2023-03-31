#include <iostream>
using namespace std;
class mye1
{
};
class mye2 : public mye1
{
};

int main()
{
    int a;
    try
    {
        if (a == 0)
            throw 1;
    }
    catch (mye2)
    {
    }
    catch (mye1)
    {
    }
    return 0;
}