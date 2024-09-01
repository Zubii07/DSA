/*What is Circular Linked List?
   Circular Linked List is a variation of Linked list in which the first element points to the last element
   and the last element points to the first element. Both Singly Linked List and Doubly Linked List can
    be made into a circular linked list.*/

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // Destructor
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << " Memory is free for Node with data  " << val << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // Non-Empty list
        // Assuming that element is present in the list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

// function to delete node
void deleteNode(Node *&tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << " List is empty." << endl;
        return;
    }
    else
    {
        // Non-Empty
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        if (curr == prev)
        { // logic for single/1 node LL
            tail = NULL;
        }
        else if (tail == curr)
        { // logic for >=2 node LL
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *tail)
{

    Node *temp = tail;
    if (tail == NULL)
    {
        cout << " list is empty." << endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
int main()
{

    Node *tail = NULL;
    insertNode(tail, 5, 1); // for empty list
    print(tail);

    insertNode(tail, 1, 2); // When list is already available
    print(tail);

    insertNode(tail, 2, 3);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    deleteNode(tail, 1);
    print(tail);

    return 0;
}
