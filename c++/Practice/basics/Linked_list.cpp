#include <iostream>
#include <memory.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head = NULL;
node *tail = NULL;

class LIL
{
public:
    void insert(int data)
    {
        node *nwNode = NULL;
        nwNode = (node *)malloc(sizeof(node));
        nwNode->data = data;
        nwNode->next = NULL;
        if (head == NULL)
        {
            head = tail = nwNode;
        }

        else
        {

            tail->next = nwNode;
            tail = tail->next;
        }
    }

    void Display();

    void DeleteNode(int pos)
    {
        node *temp = head;
        node *r = NULL;
        for (int i = 1; i < pos; i++)
        {
            if (temp->next != NULL)
            {
                r = temp;
                temp = temp->next;
            }
        }
        cout << endl
             << "The element deleted is " << temp->data << endl;
        r->next = temp->next;
        free(temp);
    }
};
void LIL::Display()

{
    node *temp;
    temp = head;
    cout << "the elements are" << endl;
    if (head = NULL)
    {
        cout << "ops" << endl;
    }

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    temp = NULL;
}

void RDisplay(node *t)
{
    if (t == NULL)
    {
        return;
    }
    else
    {
        cout << t->data << " ";
        RDisplay(t->next);
    }
}

int main()
{

    LIL l;

    l.insert(20);

    l.insert(30);

    l.insert(40);

    l.insert(50);

    l.insert(60);

    l.insert(70);

    l.insert(80);

    l.insert(90);
    RDisplay(head);
    l.DeleteNode(4);

    l.Display();

    l.DeleteNode(3);
    RDisplay(head);
    return 0;
}