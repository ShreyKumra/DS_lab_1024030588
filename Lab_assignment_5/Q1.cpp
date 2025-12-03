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

    // Insert at beginning
    void insertAtBeginning(int v)
    {
        Node *p = new Node(v);
        p->n = h;
        h = p;
    }

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

    // Insert after a value
    void insertAfter(int k, int v)
    {
        Node *t = h;
        while (t && t->d != k)
            t = t->n;

        if (!t)
        {
            cout << "Key " << k << " not found!" << endl;
            return;
        }

        Node *p = new Node(v);
        p->n = t->n;
        t->n = p;
    }

    // Insert before a value
    void insertBefore(int k, int v)
    {
        if (!h)
            return;

        if (h->d == k)
        {
            insertAtBeginning(v);
            return;
        }

        Node *t = h;
        while (t->n && t->n->d != k)
            t = t->n;

        if (!t->n)
        {
            cout << "Key " << k << " not found!" << endl;
            return;
        }

        Node *p = new Node(v);
        p->n = t->n;
        t->n = p;
    }

    // Delete from beginning
    void deleteFromBeginning()
    {
        if (!h)
        {
            cout << "List is empty!" << endl;
            return;
        }
        Node *t = h;
        h = h->n;
        delete t;
    }

    // Delete from end
    void deleteFromEnd()
    {
        if (!h)
        {
            cout << "List is empty!" << endl;
            return;
        }
        if (!h->n)
        {
            delete h;
            h = nullptr;
            return;
        }
        Node *t = h;
        while (t->n->n)
            t = t->n;

        delete t->n;
        t->n = nullptr;
    }

    // Delete specific node
    void deleteNode(int k)
    {
        if (!h)
            return;

        if (h->d == k)
        {
            Node *t = h;
            h = h->n;
            delete t;
            return;
        }

        Node *t = h;
        while (t->n && t->n->d != k)
            t = t->n;

        if (!t->n)
        {
            cout << "Key " << k << " not found!" << endl;
            return;
        }

        Node *del = t->n;
        t->n = del->n;
        delete del;
    }

    // Search
    void search(int k)
    {
        Node *t = h;
        int pos = 1;
        while (t)
        {
            if (t->d == k)
            {
                cout << "Found " << k << " at position " << pos << endl;
                return;
            }
            t = t->n;
            pos++;
        }
        cout << "Key " << k << " not found!" << endl;
    }

    // Display list
    void display()
    {
        if (!h)
        {
            cout << "List is empty!" << endl;
            return;
        }
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
    int c, v, k;

    while (true)
    {
        cout << "\n--- Singly Linked List Menu ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert After a Value\n";
        cout << "4. Insert Before a Value\n";
        cout << "5. Delete from Beginning\n";
        cout << "6. Delete from End\n";
        cout << "7. Delete Specific Node\n";
        cout << "8. Search for a Node\n";
        cout << "9. Display List\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> c;

        switch (c)
        {
        case 1:
            cout << "Enter value: ";
            cin >> v;
            L.insertAtBeginning(v);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> v;
            L.insertAtEnd(v);
            break;
        case 3:
            cout << "Enter key after which to insert: ";
            cin >> k;
            cout << "Enter value: ";
            cin >> v;
            L.insertAfter(k, v);
            break;
        case 4:
            cout << "Enter key before which to insert: ";
            cin >> k;
            cout << "Enter value: ";
            cin >> v;
            L.insertBefore(k, v);
            break;
        case 5:
            L.deleteFromBeginning();
            break;
        case 6:
            L.deleteFromEnd();
            break;
        case 7:
            cout << "Enter key to delete: ";
            cin >> k;
            L.deleteNode(k);
            break;
        case 8:
            cout << "Enter key to search: ";
            cin >> k;
            L.search(k);
            break;
        case 9:
            L.display();
            break;
        case 0:
            exit(0);
        default:
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
