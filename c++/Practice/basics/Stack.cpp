#include <iostream>
using namespace std;

class DataArray
{
protected:
    int a[50], size;
};

class Stack : public DataArray
{
private:
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void getSize()
    {
        cout << "Enter the size of the Stack >> ";
        cin >> size;
    }
    void push(int x);
    int pop();
    void display();
};

void Stack::push(int x)
{
    if (top >= size)
    {
        cout << "Stack over flow";
    }
    else
    {
        top++;
        a[top] = x;
        cout << "\nThe element " << x << " is pushed successfully " << endl;
    }
}
int Stack::pop()
{
    if (top < 0)
    {
        return -1;
    }
    else
    {
        int x = a[top];
        top--;

        return x;
    }
    return 0;
}
void Stack::display()
{
    int p = top;
    int i = 1;
    while (p != -1)
    {
        cout << "\n The element " << i << " is :" << a[p];
        p--;
        i++;
    }
}

int main()
{
    Stack s;
    s.getSize();
    s.push(19);
    s.push(12);
    s.push(14);
    s.push(16);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(150);
    s.push(106);
    s.push(107);

    int z = s.pop();
    if (z == -1)
    {
        cout << "\nStack is empty" << endl;
    }
    else
    {
        cout << "\nThe element " << z << " is deleted" << endl;
    }
    s.display();
    return 0;
}