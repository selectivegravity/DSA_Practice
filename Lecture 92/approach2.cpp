#pragma GCC optimize("Ofast","unroll-loops","omit-frame-pointer","inline") //Optimization flags
#pragma GCC option("arch=native","tune=native","no-zero-upper") //Enable AVX
#pragma GCC target("avx2")  //Enable AVX

#include<bits/stdc++.h>

using namespace std;

constexpr int MAXN = int(1e6);
int dp[MAXN+2],dp1[MAXN+2];
int num0[MAXN],num1[MAXN];

void solveII(int &n){
    int len=dp1[0]+1;
    int curind=num1[0]+1;
    string ans="1";
    for (int i=1;i<len;i++){
        if(curind>=n){
            ans.push_back('0');
            continue;
        }
        if(num0[curind]>=n){
            ans.push_back('0');
            curind=num0[curind]+1;
            continue;
        }
        if(dp[num0[curind]+1]<len-i-1){
            ans.push_back('0');
            curind=num0[curind]+1;
        }
        else{
            ans.push_back('1');
            curind=num1[curind]+1;
        }
    }
    cout<<ans<<"\n";
}

void solve() {
    string s;
    cin>>s;
    int n =s.size();

    int pos=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            for(int j=pos+1;j<=i;++j){
                num0[j]=i;
                pos=i;
            }
        }
    }
    for(int i=pos+1;i<n;++i){
        num0[i]=n;
    }

    if(num0[0]==n){
        cout<<"0\n";
        return ;
    }
    pos=-1;
    for(int i=0;i<n;++i){
        if(s[i]=='1'){
            for(int j=pos+1;j<=i;++j){
                num1[j]=i;
                pos=i;
            }
           
        }
    }
    for(int i=pos+1;i<n;++i){
        num1[i]=n;
    }
    dp[n]=dp[n+1]=0;
    dp1[n]=dp1[n+1]=0;
    for(int i=n-1;i>=0;--i){
        dp[i]=dp[i+1];
        dp1[i]=dp1[i+1];
        if(s[i]=='0' && num1[i]<n){
            dp[i]=max(dp[i],dp[num1[i]+1]+1);
        }
        if(s[i]=='1' && num0[i]<n){
            dp[i]=max(dp[i],dp[num0[i]+1]+1);
        }
        if(num1[i]<n){
            dp1[i]=max(dp1[i],dp[num1[i]+1]+1);
        }
    }
    solveII(n);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();       
    }

    return 0;
}