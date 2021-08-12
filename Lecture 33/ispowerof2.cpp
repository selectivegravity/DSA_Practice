#include<bits/stdc++.h>
using namespace std;

int ispower_2(int n){
    if(n==1 || n==0){
        return 0;
    }
    return !(n&n-1);
}

int main(){
    int n;cin>>n;
    if(ispower_2(n)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}