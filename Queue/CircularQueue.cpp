// Cricular Queue Implementation

#include<iostream>
using namespace std;

class Queue{
    int* arr;
    int capacity;
    int currSize;
    int f,r; // f means front and r means rear

   public:
     Queue(int capacity){
        this->capacity=capacity;
        arr = new int[capacity];
        currSize=0;
        f=0;
        r=-1;
     }
     
     void push(int data){
        if(currSize == capacity){
            cout<< " Queue is FULL\n";
            return;
        }

        r = (r+1)%capacity; // formula for update Rear
        arr[r] = data;
        currSize++;

     }

     void pop(){
        if(empty()){
            cout<< " Queue is EMPTY\n";
            return;
        }

        f = (f+1)%capacity; // formula for update Front
        currSize--;
        

     }

     int front(){
        if(empty()){
            cout<< " Queue is EMPTY\n";
            return -1;
        }
        return arr[f];

     }

     bool empty(){
        return  currSize == 0;
     }

     
};
int main(){

    Queue q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

   


    cout<< q.front()<<endl;
    q.pop();

    cout<<q.front()<<endl;
    q.push(5);
    cout<<q.front()<<endl;


    return 0;
}