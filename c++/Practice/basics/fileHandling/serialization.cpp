#include <iostream>
#include <fstream>
using namespace std;

class student
{
private:
    string name;
    int roll;
    string dep;

public:
    student()
    {
    }
    student(string n, int r, string d)
    {
        name = n;
        roll = r;
        dep = d;
    }
    friend ofstream &operator<<(ofstream &write, student &s);
    friend ifstream &operator>>(ifstream &read, student &s);
    friend ostream &operator<<(ostream &out, student &s);
    friend istream &operator>>(istream &in, student &s);
};
ofstream &operator<<(ofstream &write, student &s)
{
    write
        << s.name << endl;
    write << s.roll << endl;
    write << s.dep << endl;
    return write;
}
ifstream &operator>>(ifstream &read, student &s)
{
    read >> s.name;
    read >> s.roll;
    read >> s.dep;
    return read;
}
ostream &operator<<(ostream &out, student &s)
{
    out << "Name : " << s.name << endl;
    out << "Roll No :" << s.roll << endl;
    out << "Dep : " << s.dep << endl;
    return out;
}
istream &operator>>(istream &in, student &s)
{
    cout << "Enter the name >> ";
    in >> s.name;
    cout << "Enter the roll number >> ";
    in >> s.roll;
    cout << "Enter the Department >> ";
    in >> s.dep;
    return in;
}

int main()
{
    ofstream out("stud.txt", ios::app);
    int c = 1;
    student s[20];
    int n = 0;

    do
    {
        s[n++];

        cin >> s[n];
        out << s[n];
        cout << "Enter your choice >> ";
        cin >> c;
    } while (c == 1);

    ifstream pri("stud.txt");
    int i = 0;
    while (!(pri.eof()))
    {

        pri >> s[i];
        cout << s[i];
        i++;
    }

    return 0;
}