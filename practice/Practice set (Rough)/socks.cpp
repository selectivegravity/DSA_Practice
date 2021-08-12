#pragma GCC optimize("Ofast","unroll-loops","omit-frame-pointer","inline") //Optimization flags
#pragma GCC option("arch=native","tune=native","no-zero-upper") //Enable AVX
#pragma GCC target("avx2")  //Enable AVX

#include<bits/stdc++.h>
#define el "\n"
#define ll long long int
#define pb push_back
#define u_m unordered_map
#define u_s unordered_set
#define p_q priority_queue
using namespace std;
  
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    ll N,M;
    cin>>N>>M;
    double K;
    cin>>K;
    double arr[N][M];
    for(ll i=0;i<N;i++){
        for(ll j=0;j<M;j++){
            cin>>arr[i][j];
        }
    }
    ll count=0;
    for(ll i=0;i<N;i++){
        for(ll j=0;j<M;j++){
            // iterating to each element ...
            ll row=i;
            ll col=j;
            double mainsum=arr[i][j];
            while(row<N && col<M){
                double sum=0;
                if(row!=i && col!=j){
                    // vertical
                    for(ll k=row;k>=i;k--){
                        sum+=arr[k][col];
                    }
                    // horizontal
                    for(ll l=col-1;l>=j;l--){
                        sum+=arr[row][l];
                    }
                }  
                mainsum+=sum;                    
                double avg=double(mainsum)/double((col-j+1)*(row-i+1));
                if(avg>=K){
                    count+=(min(N-row,M-col));
                    break;
                }
                row++;
                col++;
            }
        }
    }
    cout<<count<<endl;
    }
    
    return 0;
}