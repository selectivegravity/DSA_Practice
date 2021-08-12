#include<iostream>
#include<algorithm>
using namespace std;

int largest(int arr[],int n){
    int large=INT32_MIN;
    for(int i=0;i<n;i++){
        large=max(large,arr[i]);
    }
    return large;
}

void count_sort(int arr[],int n){
    int N=largest(arr, n);
    int idx[N];
    for(int i=0;i<=N;i++){
        idx[i]=0;
    }
    for(int i=0;i<n;i++){
        idx[arr[i]]++;
    }
    for(int i=0;i<=N;i++){
        if(idx[i]!=0){
            for(int j=0;j<idx[i];j++){
                cout<<i<<" ";
            }
        }
    }
}

int main(){
    int arr[7]={1,2,3,2,4,2,7};
    count_sort(arr,7);
    return 0;
}