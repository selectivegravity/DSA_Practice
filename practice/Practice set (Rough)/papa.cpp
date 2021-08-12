#pragma GCC optimize("Ofast","unroll-loops","omit-frame-pointer","inline") //Optimization flags
#pragma GCC option("arch=native","tune=native","no-zero-upper") //Enable AVX
#pragma GCC target("avx2")  //Enable AVX

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int R,C,X;
    cin>>R>>C>>X;
    int arr[R][C];
    int garr[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>garr[i][j];
        }
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(arr[i][j]==garr[i][j]){
                continue;
            }
            else{
                int x=arr[i][j]-garr[i][j];
                if(R-i>=X){                          // downnward reduction
                    for(int k=0;k<X;k++){
                        arr[i+k][j]-=x;
                    }                  
                }
                else if (C-j>=X){                    // rightward reduction
                    for(int k=0;k<X;k++){
                        arr[i][j+k]-=x;
                    }       
                }
            }
        }
    }
    int flag=1;
    for(int i=R-X+1;i<R;i++){
        for (int j=C-X+1;j<C;j++){
            if(arr[i][j]==garr[i][j]){
                continue;
            }
            else{
                flag=0;
                break;
            }
        }     
    }

    if(flag==1){
        cout<<"YES"<<endl;
    }
    else if(flag==0){
        cout<<"NO"<<endl;
    }
    }
	return 0;
}
