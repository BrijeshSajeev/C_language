#include <iostream>
using namespace std;
class students
{
public:
    int m1, m2, m3;
    int roll;
    string name;
    int total();
    int grade();
    float average()
    {
        return (m1 + m2 + m3) / 3;
    }
};
int students::total()
{
    return m1 + m2 + m3;
}
int students::grade()
{
    if (average() >= 90)
    {
        return 1;
    }
    else if (average() >= 75 && average() < 90)
    {
        return -1;
    }
    else if (average() >= 50 && average() < 75)
    {
        return 2;
    }
    return 0;
}

int main()
{
    students s1[19];
    int n;
    cout << "enter num of students";
    cin >> n;
    cout << "Enter students details below " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "enter your name : ";
        cin >> s1[i].name;
        cout << "Enter your roll number : ";
        cin >> s1[i].roll;
        cout << "Enter m1,m2,m3 ::> ";
        cin >> s1[i].m1 >> s1[i].m2 >> s1[i].m3;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Name : " << s1[i].name << endl;
        cout << "Roll NO : " << s1[i].roll << endl;
        cout << "English \t\t\t" << s1[i].m1 << endl;
        cout << "Tamil \t\t\t\t" << s1[i].m2 << endl;
        cout << "Maths \t\t\t\t" << s1[i].m3 << endl;
        cout << "Total \t\t\t\t" << s1[i].total() << endl;
        if (s1[i].grade() == 1)
        {
            cout << "Grade --> A" << endl;
        }
        else if (s1[i].grade() == -1)
        {
            cout << "Grade --> B" << endl;
        }
        else if (s1[i].grade() == 2)
        {
            cout << "Grade --> C" << endl;
        }
        else
        {
            cout << " Fail " << endl;
        }
    }
    return 0;
}
