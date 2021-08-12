/*********************** Compare indices i with array[i] and store max{i,array[i]} in array***************/
#include <iostream>
using namespace std;

int main (){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=i){
            continue;
        }
        else{
            arr[i]=i;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}