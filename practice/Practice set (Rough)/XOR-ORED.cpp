#pragma GCC optimize("Ofast","unroll-loops","omit-frame-pointer","inline") //Optimization flags
#pragma GCC option("arch=native","tune=native","no-zero-upper") //Enable AVX
#pragma GCC target("avx2")  //Enable AVX

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int N=1e5+1;

int main(){
    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    cout<<v[0]<<endl;
    }
    return 0;
}