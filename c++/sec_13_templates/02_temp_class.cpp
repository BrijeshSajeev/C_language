#include <iostream>
using namespace std;
template <class t>
class stack
{
private:
    t *stk;
    int top;
    int size;

public:
    stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new t[size];
    }
    void push(t x);
    t pop();
};
template <class t>
void stack<t>::push(t x)
{
    if (top == size - 1)
        cout << "Stack full";
    else
    {
        top++;
        stk[top] = x;
    }
}
template <class t>
t stack<t>::pop()
{
    t x = 0;
    if (top == -1)
        cout << "stack is empty";
    else
    {
        x = stk[top];
        top--;
    }
    return x;
}
int main()
{
    stack<int> s(10);
    s.push(10);
    s.pop();
    stack<float> f(10);
    f.push(29.22);
    f.pop();

    return 0;
}