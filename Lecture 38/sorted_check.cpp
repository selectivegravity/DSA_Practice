#include<iostream>
using namespace std;

bool sorted(int arr[],int N){

    if(N==0){
        return true;
    }

    if(N==1){
        return arr[0]<arr[1];
    }

    return arr[N-1]>arr[N-2];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sorted(arr,n);
    return 0;
}