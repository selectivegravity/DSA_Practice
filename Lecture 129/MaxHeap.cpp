#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector <int> > pq;
    pq.push(1);
    pq.push(3);
    pq.push(2);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    return 0;
}