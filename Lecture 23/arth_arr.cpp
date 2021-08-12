/***************** max length of arthematic subarray****************/
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int curr_pd=arr[0]-arr[1];
    int ans=1;
    int prev_ans=1;
    for(int i=0;i<n;i++){
        if(arr[i]-arr[i+1]==curr_pd){
            ans+=1;
        }
        else{
            curr_pd=arr[i]-arr[i+1];
            prev_ans=max(prev_ans,ans);
            ans=2;
        }      
    }
    cout<<prev_ans<<endl;
    return 0;
}