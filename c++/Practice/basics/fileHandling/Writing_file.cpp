#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("my.txt", ios::app);
    out << "bunu" << endl;
    out << 29 << endl;
    out << "ece" << endl;
   
    string name, dep;

    int roll;
    
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter name roll dep >> ";
        cin >> name >> roll >> dep;
        out << name << endl;
        out << roll << endl;
        out << dep << endl;
    }

    return 0;
}