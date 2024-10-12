// singly
#include <iostream>
using namespace std;

// Implement LL
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor to delete Node
    ~Node()
    {
        int value = this->data;
        // Memory Free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout << " Memory is free for Node with data  " << value << endl;
    }
};

// Funtion Add number at tail/end
void insertAtTail(Node *&tail, int d)
{
    // create new node
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// Funtion Add number at start/beggining
void insertAtHead(Node *&head, int d)
{
    // create new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Funtion Add number at Middle
void InsertAtposition(Node *&head, int position, int d)
{

    if (position == 1)
    {
        insertAtHead(head, d); // to add at first/start
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // create new node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// Function to delete node
void deleteNode(int position, Node *&head)
{
    // Deleting First/Start Node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // Deleting any middle or last Node
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

main()
{

    Node *node1 = new Node(10);
    // cout<< node1 -> data<<endl;
    // cout<< node1 -> next<<endl;

    // head pointed to new node
    Node *head = node1;
    Node *tail = node1;

    print(head);

    cout << " Add Element At End or Tail" << endl;
    insertAtTail(tail, 11);
    print(head);
    insertAtTail(tail, 12);
    print(head);

    cout << endl;
    cout << " Add Element At Start or Beggining" << endl;
    insertAtHead(head, 9);
    print(head);
    insertAtHead(head, 8);
    print(head);

    cout << endl;
    cout << " Add Element At Middle" << endl;
    InsertAtposition(head, 1, 7);
    print(head);

    cout << endl;
    deleteNode(2, head);
    print(head);

    return 0;
}
