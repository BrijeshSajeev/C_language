#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    string name;

public:
    employee(int i, string n)
    {
        id = i;
        name = n;
    }
    string getname()
    {
        return name;
    }
    int getide() { return id; }
    void setname(string na) { name = na; }
    void setide(int i) { id = i; }
};
class fulltimeemp : public employee
{
private:
    int salary;

public:
    fulltimeemp(int id, string na, int s) : employee(id, na)
    {
        salary = s;
    }
    int getsal() { return salary; }
    void setsalary(int s) { salary = s; }
};
class parttimeemp : public employee
{
private:
    int salary;

public:
    parttimeemp(int id, string na, int s) : employee(id, na)
    {
        salary = s;
    }
    int getwage() { return salary; }
};

int main()
{
    fulltimeemp f(1, "Brijesh", 100000);
    parttimeemp p(2, "Sabik", 1000);
    cout << "The salary of  " << f.getname() << " id number : " << f.getide() << " is " << f.getsal() << endl;
    cout << "The wage of " << p.getname() << " id number : " << p.getide() << " is " << p.getwage() << endl;

    return 0;
}