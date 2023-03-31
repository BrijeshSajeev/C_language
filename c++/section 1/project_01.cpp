// Area of a circle
#include <iostream>
using namespace std;

int main()
{
    float area, radius;
    cout << "Enter the radius of the circle ::-> ";
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << "\n"
         << area;
    return 0;
}