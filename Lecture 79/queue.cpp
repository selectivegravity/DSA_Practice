#include<iostream>
using namespace std;
#define n 100

class queue {
    int* arr;
    int front;
    int back;

    public:

    queue(){
        arr= new int [n];
        front=-1;
        back=-1;
    }

    void enqueue(int x){
        if(back==n-1){
            cout<<"No Space"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }

    void dequeue(){
        if(front>back || front==-1){
            cout<<"Nothing in queue"<<endl;
            return;
        }
        front++;
    }

    int peek(){
        if(front>back || front==-1){
            cout<<"Nothing in queue"<<endl;
            return -1;
        }
        return arr[front]; 
    }

    bool empty(){
        if(front>back || front==-1){
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
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    //q.dequeue();

    cout<<q.peek()<<endl;
    return 0;
}