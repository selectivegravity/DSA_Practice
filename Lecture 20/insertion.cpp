#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        while(arr[i]>arr[i+1]){
            int k;k=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=k;i--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}