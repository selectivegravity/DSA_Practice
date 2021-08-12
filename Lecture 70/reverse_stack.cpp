#include<iostream>
#include<stack>
using namespace std;

// insert ele at the satrting we need to pop everyone again...

void insertAtBottom(stack <int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int topele=st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(topele);
}

// reversering a stack using recursion method instead of using a new stack ...

void reverse (stack <int> &st){
    if(st.empty()){
        return;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,ele);
}

int main(){
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}