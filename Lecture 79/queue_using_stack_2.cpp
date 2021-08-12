#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack <int> st1;
    public:
    
    void enqueue(int x){
        st1.push(x);
    }

    int dequeue(){
        if(st1.empty()){
            cout<<"empty"<<endl;
            return -1;
        }
        int x=st1.top();
        st1.pop();
        if(st1.empty()){
            return x;
        }
        int item=dequeue();
        st1.push(x);
        return item;
    }

    bool empty(){
        if(st1.empty()){
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
    q.dequeue();q.dequeue();q.dequeue();
    cout<<q.dequeue()<<endl;
    cout<<q.empty()<<endl;
    return 0;
}