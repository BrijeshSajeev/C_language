#include <iostream>
using namespace std;

class Queue
{
private:
    int Q[20], size, rear, front;

public:
    Queue() : size(7), rear(-1), front(-1)
    {
    }

    void setSize(int d)
    {
        size = d;
    }

    void Enqueue(int x)
    {
        if (front == -1 && rear == -1)
        {
            front++;
            rear++;
        }
        if (rear >= size)
        {
            cout << "The Queue is full ";
            exit(0);
        }
        else
        {

            Q[rear] = x;
            rear++;
            cout << "\nThe element " << x << " is inserted" << endl;
        }
    }
    int Dequeue();
    void display();
};

int Queue::Dequeue()
{
    int x;
    if (front == -1 || front > size)
    {
        cout << "The Queue is empty " << endl;
        return 0;
    }
    else
    {
        x = Q[front];
        front++;
    }
    return x;
}

void Queue::display()
{

    for (int i = front; i < rear; i++)
    {
        cout << Q[i] << " ";
    }
}

int main()
{

    Queue q;
    q.setSize(9);
    q.Enqueue(89);
    q.Enqueue(19);

    q.Enqueue(39);

    q.Enqueue(49);

    q.Enqueue(56);

    q.Enqueue(87);

    q.Enqueue(85);
    q.display();

    cout << endl;

    int x = q.Dequeue();
    if (x == 0)
    {
        cout << '0';
    }
    else
    {
        cout << "\nThe element " << x << " is deleted" << endl;
        q.display();
    }
    return 0;
}