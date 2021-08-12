#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll unsigned int 

int main(){
    ll range = 2e6;
    ll idx[range];
    ll n;
    cin>>n;
    ll arr[n];
    while(n--){
        ll N;
        cin>>N;
        idx[N]=1;
    }
    for(ll i=2;i<range;i++){
        if(idx[i]!=1){
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
}