#include <iostream>
#include <fstream>
using namespace std;
class items
{
private:
    string name;
    int price;
    int quantity;

public:
    items() {}
    items(string n, int p, int q)
    {
        name = n;
        price = p;
        quantity = q;
    }

    friend ofstream &operator<<(ofstream &ofs, items &i);
    friend ifstream &operator>>(ifstream &ifs, items &i);
    friend ostream &operator<<(ostream &os, items &i);
};
ofstream &operator<<(ofstream &fos, items &i)
{
    fos << i.name <<endl<<  i.quantity <<endl<< i.price << endl;
    return fos;
}
ifstream &operator>>(ifstream &ifs, items &i)
{
    ifs >> i.name;
    ifs >> i.quantity;
    ifs >> i.price;
    return ifs;
}
ostream &operator<<(ostream &os, items &i)
{
    os << i.name << endl
       << i.quantity << endl
       << i.price << endl;
    return os;
}
int main()
{

    int n;
    string s;
    int q, p;
    cout << "ENter number of items : ";
    cin >> n;
    items *list[n];
    cout << "Enter all items ";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Item Name , quantities , price ";
        cin >> s >> q >> p;
        list[i] = new items(s, q, p);
    }
    ofstream fos("items.txt");
    for (int i = 0; i < n; i++)
    {
        fos << *list[i];
    }
    items is;
    ifstream ifs("items.txt");
    for (int i = 0; i < 3; i++)
    {
        ifs >> is;
        cout << "Items " << i << is << endl;
    }

    return 0;
}