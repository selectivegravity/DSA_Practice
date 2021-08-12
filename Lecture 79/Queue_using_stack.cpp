#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack <int> st1;
    stack <int> st2;
    public:
    
    void enqueue(int x){
        st1.push(x);
    }

    void dequeue(){
        if(st1.empty()){
            cout<<"empty"<<endl;
            return;
        }
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        st2.pop();
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
    }

    int peek(){
        if(st1.empty()){
            return -1;
        }
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        int topvalue=st2.top();
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return topvalue;      
    }

    bool empty(){
        if(st1.empty() && st2.empty()){
            return true;
        }
        return false;
    }
};

int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.dequeue();q.dequeue();q.dequeue();q.dequeue();q.dequeue();q.dequeue();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;
    return 0;
}