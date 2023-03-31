#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofs("my1st.txt");
    ofs << "Hello" << endl;
    ofs << 25 << endl;

    ofs << "Good morning" << endl;

    ofs.close();
    return 0;
}