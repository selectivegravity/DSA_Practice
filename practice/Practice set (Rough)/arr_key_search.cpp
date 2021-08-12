#include<iostream>
using namespace std;

int indice(int n,int arr[],int num){
    
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;

}

int smallest(int arr[],int n){
    int N=100;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }
    for(int i=0;i<n;i++){
        idx[arr[i]]=1;
    }
    for(int i=0;i<N;i++){
        if(idx[i]==-1){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,0,4,55,6,3,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<smallest(arr,10)<<"\n";
    return 0;
}