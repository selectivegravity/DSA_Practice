#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_step=1;
    for(int i=0;i<n;i++){
        float max_slope=INT_MIN;
        for(int j=i+1;j<n;j++){
            float slope=float(arr[j]-arr[i])/float(j-i);
            if(max_slope<=slope){
                max_slope=max(max_slope,slope);
                max_step=max(max_step,j-i);
            }
        }
    }
    cout<<max_step<<endl;
    }
    return 0;
}