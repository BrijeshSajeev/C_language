#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("my1st.txt");
    string s;
    int h;
    string j;
    infile >> s >> h >> j;
    cout << s << endl;
    cout << h << endl;
    cout << j;
    infile.close();

    return 0;
}