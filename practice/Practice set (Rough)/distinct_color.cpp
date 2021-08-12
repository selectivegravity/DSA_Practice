#include<bits/stdc++.h>
using namespace std;

int dp_xor(int n,int start,int k){
    if(k==0){
        return 0;
    }
    if(start==n){
       return start; 
    }
    return min(start^dp_xor(n,start+1,k-1),dp_xor(n,start,k));
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<dp_xor(n,1,k);
    return 0;
}