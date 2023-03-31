#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream io;
    io.open("my.txt");
    string name;
    int roll;
    string dep;
    while (!(io.eof()))
    {
        io >> name >> roll >> dep;
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "Dep : " << dep << endl;
    }
    return 0;
}