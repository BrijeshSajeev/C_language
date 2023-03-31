// insert given str in given index
#include <iostream>

using namespace std;
int main()
{
    string s = "programming";
    cout << s << endl;

    s.insert(3, "kkk");

    cout << s << endl;

    string m = "nams";

    cout << m << endl;

    m.replace(3, 1, "e");
    cout << m << endl;

    return 0;
}