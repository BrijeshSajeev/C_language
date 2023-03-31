#include <iostream>
#include <fstream>
using namespace std;
class student
{
private:
    int roll;
    string name;
    string dep;

public:
    student()
    {
    }
    student(string n, int r, string d)
    {
        roll = r;
        name = n;
        dep = d;
    }
    friend ofstream &operator<<(ofstream &ofs, student &s);
    friend ifstream &operator>>(ifstream &ifs, student &s);
    friend ostream &operator<<(ostream &os, student &s);
};
ofstream &operator<<(ofstream &ofs, student &s)
{
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.dep << endl;
    return ofs;
}
ifstream &operator>>(ifstream &ifs, student &s)
{
    ifs >> s.name;
    ifs >> s.roll;
    ifs >> s.dep;
    return ifs;
}
ostream &operator<<(ostream &os, student &s)
{
    os << "Name\t" << s.name << endl;
    os << "Roll No\t" << s.roll << endl;
    os << "DEP\t" << s.dep << endl;
    return os;
}
int main()
{
    student s1("john", 2136, "cs");
    ofstream ofs("student.txt");
    ofs << s1;
    ofs.close();
    student s2;
    ifstream ifs("student.txt");
    ifs >> s2;
    cout << s1;

    return 0;
}