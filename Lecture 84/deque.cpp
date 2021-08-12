#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque <int> deq;
    deq.push_front(1);
    deq.push_back(2);
    deq.push_back(3);
    deq.push_front(4);
    deq.push_back(5);
    deq.push_back(6);
    cout<<deq.back()<<endl;
    cout<<deq.front()<<endl;
    for(auto i: deq){
        cout<<i<<" ";
    }
    return 0;
}