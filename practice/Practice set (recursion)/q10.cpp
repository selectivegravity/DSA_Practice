#include<bits/stdc++.h>
using namespace std;

void weird(int n){
    if(n==1){
        cout<<1<<"\n";
        return;
    }
    cout<<n<<" ";
    if(n%2==0){
        weird(n/2);
    }
    else{
        weird(n*3+1);
    }
}

int main(){
    int n;
    cin>>n;
    weird(n);
    return 0;
}