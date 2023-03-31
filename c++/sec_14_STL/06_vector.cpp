/*  VECTOR
std::vector<T>;
note:
1.it is sequence container and also known as Dynamic array
2.its size can grow and shrink dynamically ,and no need to provide size at compile

Element access
at(),[],front(),back(),data()

MOdifiers
insert(),emplace(),push_back(),pop_back(),emplace_back(),resize()
swap(),erase(),clear()
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> v;

    vector<int> arr(5, 20);
    vector<int> arr1 = {1, 2, 3, 45};
    vector<int> arr2{7, 8, 9, 6}; // uniform intitilization
    for (int i = 0; i <= 32; i++)
    {
        v.push_back(i);
        cout << "size : " << v.size() << "   "
             << "Capacity" << v.capacity() << endl;
    }

    vector<int> s;
    cout << "After reserving capacity";
    s.reserve(100);
    for (int i = 0; i <= 32; i++)
    {
        s.push_back(i);
        cout << "size : " << s.size() << "   "
             << "capacity" << s.capacity() << endl;
    }
    return 0;
}