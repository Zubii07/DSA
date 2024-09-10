/*#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << " Stack is OverFlow." << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << " Stack UnderFlow." << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << " Stack is empty." << endl;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{

    Stack st(4);
    st.push(22);
    st.push(23);
    st.push(24);
    st.push(25);
    // st.push(36); overflow printed

    cout << " Before pop, peek Value is " << st.peek() << endl;

    st.pop();
    st.pop();
    cout << " After pop, peek Value is " << st.peek() << endl;

    return 0;
}*/


// Two stack in Array

#include<iostream>
using namespace std;

class TwoStack{
   public: 
    int *arr;
    int top1;
    int top2;
    int size;

    

    // Initialize Two Stack
    TwoStack(int s){
        this->size=s;
        top1=-1;
        top2=s;
        arr = new int[s];
    }

    // Push in Stack 1
    void push1(int num){
        // atleast 1 empty space present
        if(top2-top1>1){
            top1++;
            arr[top1]=num;
        }else{
            cout<<" Stack overflow."<<endl;
        }

    }

     
    // Push in Stack 2
    void push2(int num){
        if(top2-top1>1){
            top2--;
            arr[top2]=num;
        }else{
            cout<<" Stack overflow."<<endl;
        }


    }


    // Pop from stacks 1 and return pop
    int pop1(){
        if(top1>=0){
            int ans = arr[top1];
            top1--;
            return ans;
        }else{
            return -1;
        }

    }

    // Pop from stacks 2 and return pop
    int pop2(){
         if(top2<size){
            int ans = arr[top2];
            top2++;
            return ans;
        }else{
            return -1;
        }

    }

};
int main(){

  
    TwoStack ts(6);

    // Push elements into the first stack
    ts.push1(10);
    ts.push1(20);
    ts.push1(30);

    // Push elements into the second stack
    ts.push2(40);
    ts.push2(50);
    ts.push2(60);

    // Pop from both stacks
    cout << "Popped from stack 1: " << ts.pop1() << endl; // 30
    cout << "Popped from stack 2: " << ts.pop2() << endl; // 60

    // Push more elements to test overflow
    ts.push1(70);
    ts.push2(80); // Overflow test

    // Pop remaining elements from both stacks
    cout << "Popped from stack 1: " << ts.pop1() << endl; // 70
    cout << "Popped from stack 2: " << ts.pop2() << endl; // 50


    return 0;
}