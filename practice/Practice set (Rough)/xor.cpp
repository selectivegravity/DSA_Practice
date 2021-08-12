#pragma GCC optimize("Ofast","unroll-loops","omit-frame-pointer","inline") //Optimization flags
#pragma GCC option("arch=native","tune=native","no-zero-upper") //Enable AVX
#pragma GCC target("avx2")  //Enable AVX

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long int

int power(ll x,ll y,ll p)
{
    int ans = 1; 
    x = x % p;
    if (x == 0) {
        return 0;
    }
    while (y > 0)
    {
        if (y & 1){
            ans = (ans*x) % p;}
        y = y>>1;
        x = (x*x) % p;
    }
    return ans;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll N;
        cin>>N;
        ll mod = 1e9+7;
        cout<<power(2,N-1,mod)<<"\n";
    }
    return 0;
}