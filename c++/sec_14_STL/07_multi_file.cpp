#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        // you need to convert i to string in order to concatenate it using operator(+)

        ofstream file;
        file.open(to_string(i) + ".txt");
        file.close();
    }
    return 0;
}