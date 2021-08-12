#pragma GCC optimize("Ofast","unroll-loops","omit-frame-pointer","inline") //Optimization flags
#pragma GCC option("arch=native","tune=native","no-zero-upper") //Enable AVX
#pragma GCC target("avx2")  //Enable AVX

#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include <cmath>
using namespace std;
#define ll long long int 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N,M,K;
    cin>>N>>M>>K;
    ll arr[N][M];
    for(ll i=0;i<N;i++){
        for(ll j=0;j<M;j++){
            cin>>arr[i][j];
        }
    }
/* 
    for(int i=0;i<=M;i++){
        int sum=0;
        for(int j=0;j<=N;j++){
            arr[j][i]=sum;
            sum+=arr[j][i];
        }
    } */

    int matrix[N+1][M+1];
    
    for(int i=0;i<N+1;i++){
        for(int j=0;j<M+1;j++){
            matrix[i][j]=0;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            matrix[i+1][j+1]=arr[i][j];
        }
    }
    ll order=1;
    ll ans;
    ll count=0;
    ll mini=min(N,M);
    while(order<mini+1){
        ll i=order;
        ll j=M;
        while(i<N+1){
            int x=i-order+1;
            int y=j-order+1;
            int z=matrix[i][j]-matrix[x-1][j]-matrix[i][y-1]+matrix[x-1][y-1];
            int check=z/(order*order);
            if(check<K){ i++;}
            else{
                int start=order;
                int end=M;
                while(start<=end){
                    ll mid = (start+end)/2;
                    x=i-order+1;
                    y=mid-order+1;
                    z=matrix[i][mid]-matrix[x-1][mid]-matrix[i][y-1]+matrix[x-1][y-1];
                    check=z/(order*order);
                    if(check<K){
                        start=mid+1;
                    }
                    else{
                        int ans=mid;
                        end=mid-1;
                    }
                }
                count+=(M-ans+1);
                i++;
            }    
        }
        order++;
    }
    cout<<count<<endl;
    return 0;
}