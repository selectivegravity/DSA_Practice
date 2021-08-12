#include<bits/stdc++.h>
using namespace std;;

int main(){
    priority_queue<int , vector <int> , greater<int>> pq;
    int n;cin>>n;
    while(n--){
        int num;
        cin>>num;
        pq.push(num);
    }
    int sum=0;
    while(pq.size()>1){
        int n1,n2;
        n1=pq.top();
        pq.pop();
        n2=pq.top();
        pq.pop();
        sum+=n1+n2;
        pq.push(n1+n2);
        
    }
    cout<<sum<<endl;
    return 0;
}