#include<bits/stdc++.h>
#include<math.h>
using namespace std;

const int N= 1e5+2,MOD=1e9+7;
int dp[N];

int min_sqa(int n,int ans){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(n<0){
        return INT16_MAX;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    else{
        for(int i=1;i<=sqrt(n);i++){
            ans=min(ans,1 + min_sqa(n-(i*i),ans));
            dp[n]=ans;
        }
    }
    return dp[n];
}

int main(){
    int n;cin>>n;
    for(int i=0;i<N;i++){
        dp[i]=-1;
    }
    cout<<min_sqa(n,INT16_MAX);
    return 0;
}