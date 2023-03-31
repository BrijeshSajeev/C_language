#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *lchild, *rchild;
} node;

class BST
{
private:
    node *root = NULL;

public:
    void Insert(int key);
    node *getRoot()
    {
        return root;
    }
    void preorder(node *p);
    node *R_insert(node *p, int key);
    int hight(node *p);
};

int BST::hight(node *p)
{
    int x, y;

    if (p == NULL)
        return 0;

    x = hight(p->lchild);
    cout << "\n x=" << x << " ";
    y = hight(p->rchild);
    cout << "\ny =" << y << " ";

    return x > y ? x + 1 : y + 1;
}

void BST::Insert(int key)
{
    node *t = root;
    node *p, *r;

    if (root == NULL)
    {
        p = (node *)malloc(sizeof(node));
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }

    while (t != NULL)
    {
        r = t;
        if (key < t->data)
        {
            t = t->lchild;
        }
        else if (key > t->data)
        {
            t = t->rchild;
        }
        else
        {
            return;
        }
    }

    p = new node;
    p->data = key;
    p->lchild = p->rchild = NULL;

    if (key < r->data)
    {
        r->lchild = p;
    }
    else
    {
        r->rchild = p;
    }
}

node *BST::R_insert(node *p, int key)

{

    node *t;
    if (p == NULL)
    {

        t = (node *)malloc(sizeof(node));
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key < p->data)
    {
        p->lchild = R_insert(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->rchild = R_insert(p->rchild, key);
    }
    return p;
}

void BST::preorder(node *p)
{

    if (p)
    {
        cout << p->data << " ";

        preorder(p->lchild);

        preorder(p->rchild);
    }
}

int main()
{

    BST b;
    node *root1 = nullptr;

    root1 = b.R_insert(root1, 9);
    b.R_insert(root1, 15);
    b.R_insert(root1, 5);
    b.R_insert(root1, 20);
    b.R_insert(root1, 16);
    b.R_insert(root1, 8);
    b.R_insert(root1, 12);
    b.R_insert(root1, 31);
    b.R_insert(root1, 6);

    b.preorder(root1);
    cout << "\n"
         << b.hight(root1) << endl;
    return 0;
}