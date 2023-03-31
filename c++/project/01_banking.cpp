#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class atm
{
private:
    double balance = 500;
    int pin;

public:
    int getbalance()
    {
        return balance;
    }
    void withdraw(int n)
    {
        balance = balance - n;
    }
    void dep(int h)
    {
        balance += h;
    }

    void setpin(int a)
    {
        pin = a;
    }
    int getpin()
    {
        return pin;
    }
};
void showmenu()
{
    cout << endl;
    cout << "\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cout << "\t\t\t1.Generate ATM pin " << endl;
    cout << "\t\t\t2.Withdraw amount " << endl;
    cout << "\t\t\t3.Deposit" << endl;
    cout << "\t\t\t4.Check Balance" << endl;
    cout << "\t\t\t5.Exit" << endl;
    cout << "\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
}

int main()
{
    atm a[100];
    int opt;
    int pin, f;
    system("cls");
    cout << "\t\t<--Well Come to BL bank-->" << endl;
    cout << "please insert your card and press one to continue " << endl;
    cin >> f;
    if (f == 1)
    {
        do
        {
            showmenu();
            cout << "\n\n\tOption : ";
            cin >> opt;
            switch (opt)
            {
            case 1:
                cout << "Enter your new pin : ";
                cin >> pin;
                a->setpin(pin);
                cout << "\tYour new pin is created successfully";
                break;

            case 2:
                int with;
                cout << "Enter your amount to be withdrawn : ";
                cin >> with;
                int pa;
                cout << "\nEnter your pin : ";
                cin >> pa;
                if (a->getpin() == pa)
                {
                    if (with < a->getbalance())
                    {
                        a->withdraw(with);
                        cout << " \nTHe amount withdrawn successfully.\n\t\t\tplease collect your cash \n";
                    }
                    else
                        cout << "Not enough money";
                }
                else
                    cout << "\nOOPS ! Wrong pin.";
                break;

            case 3:
                int dep;
                cout << "\nEnter your amount to be deposited : ";
                cin >> dep;
                int ps;
                cout << "\nEnter your pin : ";
                cin >> ps;
                if (a->getpin() == ps)
                {

                    a->dep(dep);
                    cout << "\nAmount deposited successfully " << endl;
                }
                else
                    cout << "\nOOPS ! Wrong pin.";
                break;
            case 4:
                int p;
                cout << "\nEnter your pin : ";
                cin >> p;
                if (a->getpin() == p)
                {

                    cout << "Your balance is $ " << a->getbalance() << endl;
                    cout << "++++++++++++++THANK YOU++++++++++++++";
                }
                else
                    cout << "\nOOPS ! Wrong pin.";

                break;
            default:
                cout << "\nThank you for banking";
                break;
            }
        } while (opt != 5);
    }
    return 0;
}