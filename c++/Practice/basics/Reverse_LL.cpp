#include <iostream>
#include <malloc.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head = NULL;
node *temp = NULL;
class LinkedLst
{

    public:
        void insert(int x);
        void Display();
        void Reverse();
};

void LinkedLst::insert(int x)
    {
        node *New_node = NULL;
        New_node = (node *)malloc(sizeof(node));
        New_node->data = x;
        New_node->next = NULL;

        if (head == NULL)
        {
            head = temp = New_node;
        }
        else
        {

            temp->next = New_node;
            temp = temp->next;
        }
}

void LinkedLst::Display()
{
    node *p = head;

        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
}

void LinkedLst::Reverse()
{

        node *prev, *current, *nextnode;
        prev = NULL;
        current = nextnode = head;
        while (nextnode != NULL)
        {
            nextnode = nextnode->next;
            current->next = prev;
            prev = current;
            current = nextnode;
        }

        head = prev;
}

int main()
{
        LinkedLst l;
        l.insert(200);
        l.insert(211);
        l.insert(222);
        l.insert(233);
        l.insert(244);
        l.Display();
        l.Reverse();
        cout << endl;
        l.Display();

    return 0;
}