#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 0, c;
    try

    {
        if (b == 0)
            // throw 1.5;
            //throw 500;
         throw 'c';


        c = a / b;
        cout << c;
    }
    catch (int e)
    {
        cout << "int value " << e;
    }
    catch (float e)
    {
        cout << "float value " << e;
    }
    catch (string e)
    {
        cout << "string value " << e;
    }
    catch (...)
    {
        cout << "any value ";
    }
    return 0;
}