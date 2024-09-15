// Deque means Double Ended Queue

#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>deq;

    deq.push_front(1);
    deq.push_front(2);

    deq.push_back(3);
    deq.push_back(4);

    deq.pop_back();
    deq.pop_front();

    cout<< deq.front()<<endl;;
    cout<< deq.back(); 

    return 0;
}
