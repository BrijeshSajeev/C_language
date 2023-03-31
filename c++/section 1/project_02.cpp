// net salary of a worker
#include <iostream>
using namespace std;
int main()
{
    float basic, perallow, perdud, netsal;
    cout << "Enter basic salary ::> ";
    cin >> basic;
    cout << "\nENter persentage of allowances ::> ";
    cin >> perallow;
    cout << "\nEnter persentage of deduction ::> ";
    cin >> perdud;
    netsal = basic + basic * perallow / 100 - basic * perdud / 100;
    cout << "\nTHE net salary ::> " << netsal;
    return 0;
}