#include<iostream>
using namespace std;

void swap(int arr[],int l,int r){
    int temp;
    temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
    cout<<arr[l]<<" "<<arr[r]<<endl;
}

int partition(int arr[],int l,int r){
    int pivot =arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);         
        }
    }
    swap(arr,i+1,r);        // cause correct postion of pivot is not r it's i+1
    return i+1;
}

void quick(int arr[],int l,int r){
    if(l<r){
        int pi=partition(arr,l,r);      // basically we are finding correct position of pi...
        quick(arr,l,pi-1);
        quick (arr,pi+1,r);
    }
}

int main(){
    int arr[5]={5,4,3,2,1};
    quick(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}