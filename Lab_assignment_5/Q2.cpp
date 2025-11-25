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

    // Count and delete all occurrences
    int countAndDelete(int k)
    {
        int c = 0;

        // Delete head occurrences
        while (h && h->d == k)
        {
            Node *t = h;
            h = h->n;
            delete t;
            c++;
        }

        // Traverse rest of the list
        Node *t = h;
        while (t && t->n)
        {
            if (t->n->d == k)
            {
                Node *del = t->n;
                t->n = del->n;
                delete del;
                c++;
            }
            else
            {
                t = t->n;
            }
        }

        return c;
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
    L.insertAtEnd(1);
    L.insertAtEnd(2);
    L.insertAtEnd(1);
    L.insertAtEnd(3);
    L.insertAtEnd(1);

    cout << "Original List: ";
    L.display();

    int k = 1;
    int c = L.countAndDelete(k);

    cout << "Number of occurrences of " << k << " = " << c << endl;
    cout << "List after deleting all occurrences of " << k << ": ";
    L.display();

    return 0;
}
