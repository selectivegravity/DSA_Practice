#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int j;
    for(j=0;j<k;j++){
        sum+=arr[j];
    }
    int i=0;
    int ans=INT16_MAX;
    while(j<n){
        sum+=arr[j];
        sum-=arr[i];
        j++;
        i++;
        ans=min(ans,sum);
    }
    cout<<ans<<endl;
}