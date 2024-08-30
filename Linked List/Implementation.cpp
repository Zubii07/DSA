#include<iostream>
using namespace std;

// Implement LL
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }


};

     
     // Funtion Add number at tail/end
void insertAtTail(Node* &tail, int d){
     // create new node
        Node* temp = new Node(d);
        tail->next=temp;
        tail=temp;
}



   // Funtion Add number at start/beggining 
void insertAtHead(Node* &head, int d){
        // create new node
        Node* temp = new Node(d);
        temp -> next = head;
        head  = temp;

    }

    
    void print(Node* &head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
main(){

    Node* node1  = new Node(10);
   // cout<< node1 -> data<<endl;
   // cout<< node1 -> next<<endl;
     
     // head pointed to new node
    Node* head = node1;
    Node* tail = node1;

    print(head);

    cout<<" Add Element At End or Tail"<<endl;
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,13);
    print(head);
     
     cout<<endl;
    cout<<" Add Element At Start or Beggining"<<endl;
    insertAtHead(head,12);
    print(head);
    insertAtHead(head,13);
    print(head);

    return 0;
}