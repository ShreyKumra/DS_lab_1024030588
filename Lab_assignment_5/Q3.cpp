#include <iostream>
using namespace std;

struct Node
{
    int d;
    Node *n;
    Node(int x) : d(x), n(nullptr) {}
};

class LinkedList
{
private:
    Node *h;

public:
    LinkedList() { h = nullptr; }

    // Insert at end
    void insertAtEnd(int v)
    {
        Node *p = new Node(v);
        if (!h)
        {
            h = p;
            return;
        }
        Node *t = h;
        while (t->n)
            t = t->n;
        t->n = p;
    }

    // Find middle element
    void findMiddle()
    {
        if (!h)
        {
            cout << "List is empty!" << endl;
            return;
        }

        Node *s = h;
        Node *f = h;

        while (f && f->n)
        {
            s = s->n;
            f = f->n->n;
        }

        cout << "Middle element is: " << s->d << endl;
    }

    // Display list
    void display()
    {
        Node *t = h;
        while (t)
        {
            cout << t->d << " -> ";
            t = t->n;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList L;

    L.insertAtEnd(1);
    L.insertAtEnd(2);
    L.insertAtEnd(3);
    L.insertAtEnd(4);
    L.insertAtEnd(5);

    cout << "Linked List: ";
    L.display();

    L.findMiddle();

    return 0;
}
