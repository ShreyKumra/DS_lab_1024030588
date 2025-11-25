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

    // Reverse the linked list
    void reverse()
    {
        Node *a = nullptr; // prev
        Node *b = h;       // curr
        Node *c = nullptr; // next

        while (b)
        {
            c = b->n;   // Save next
            b->n = a;   // Reverse
            a = b;      // Move prev
            b = c;      // Move curr
        }

        h = a; // new head
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

    cout << "Original List: ";
    L.display();

    L.reverse();

    cout << "Reversed List: ";
    L.display();

    return 0;
}
