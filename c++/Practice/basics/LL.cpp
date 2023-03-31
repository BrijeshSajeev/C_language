#include <iostream>
#include <malloc.h>
#include <fstream>
using namespace std;

typedef struct node
{
    int roll;
    string name;
    string dep;
    struct node *next;
} node;
node *head = NULL;
node *temp = NULL;

class L_list;

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
    friend class L_list;
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

class L_list
{

public:
    void insert(int x, string n, string d)
    {

        node *new_node = NULL;
        new_node = new node[1];
        new_node->roll = x;
        new_node->name = n;
        new_node->dep = d;
        new_node->next = NULL;

        if (head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = temp->next;
        }
    }
    void insert_obj(student s)
    {

        node *new_node = NULL;
        new_node = new node[1];
        new_node->roll = s.roll;
        new_node->name = s.name;
        new_node->dep = s.dep;
        new_node->next = NULL;

        if (head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = temp->next;
        }
    }

    void Display()
    {
        node *p = head;
        cout << "THE datas of Linked List " << endl;
        while (p != NULL)
        {
            cout << "Name >>" << p->name << endl;
            cout << "Roll >>" << p->roll << endl;
            cout << "Dep >>" << p->dep << endl;
            p = p->next;
        }
    }
};

int main()
{
    L_list l;
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
    ifstream io;
    io.open("stud.txt");
    int i = 0;
    while (!(io.eof()))
    {
        io >> s[i++];
        l.insert_obj(s[i]);
     
    }
     l.Display();

    return 0;
}