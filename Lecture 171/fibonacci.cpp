#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2 , MOD=1e9+7;
int dp[N];

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    else{
        dp[n]=fibo(n-1)+fibo(n-2);
        return dp[n];
    }
    
}

int main(){
    int n;cin>>n;
    for(int i=0;i<N;i++){
        dp[i]=-1;
    }
    cout<<fibo(n)<<endl;    // n ---> number at nth position in series...
    return 0;
}