#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=0;
    if(arr[0]>arr[1]){
        cout<<arr[0]<<endl;
    }
    for(int i=1;i<n-1;i++){
        if(arr[i-1]<arr[i]>arr[i+1] && arr[i]>mx){
            mx=arr[i];
            cout<<arr[i]<<endl;
        }
    }
    if(arr[n-1]>mx){
        cout<<arr[n-1];
    }
    return 0;
}