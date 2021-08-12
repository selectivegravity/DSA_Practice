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
    vector <int> idx(N,0);
    for(int i=0;i<n;i++){
        idx[v[i]]++;
    }
    int ans=0;
    for(int i=0;i<N;i++){
        if(idx[i]==0){
            continue;
        }
        else{
            if(idx[i]>=i-1){
                ans+=i-1;
            }
            else if(idx[i]<i-1){
                ans+=idx[i];
            }
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}