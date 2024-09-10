/* A stack is a linear data structure that follows a particular order in which the operations are performed.
   The order may be LIFO (Last In First Out) or FILO (First In Last Out). Mainly three basic operations are 
    performed in the stack:

Push: adds an element to the collection.

Pop: removes an element from the collection. A pop can result in stack underflow if the stack is empty.

Peek or Top: returns the top item without removing it from the stack.

The basic principle of stack operation is that in a stack, the element that is added last
   is the first one to come off, thus the name “Last in First Out”.*/

   #include<iostream>
   #include<stack>
   using namespace std;
   int main(){

    // creation of stack using STL
    stack<int>s;

    // Push element
    s.push(1);
    s.push(2);
    s.push(3);
    

    // Pop 
    s.pop();

    // printing top elemenet
    cout<<" printing top/Peek element: "<<s.top()<<endl;

    if(s.empty()){
        cout<<" Stack is empty"<<endl;
    }
    else{
        cout<<" stack is not empty"<<endl;
    }


    // size 
    cout<<" Size of stack is: "<<s.size();
    return 0;
   }