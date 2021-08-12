#include<iostream>
using namespace std;

int last_occur(int arr[],int n,int i,int key){
    if(i<0){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return last_occur(arr,n,i-1,key);
}

int first_occur(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return first_occur(arr,n,i+1,key);
}

int main(){
    int arr[]={8,6,4,2,1,1,8,1,0};
    cout<<first_occur(arr,9,0,1)<<" "<<last_occur(arr,9,8,1)<<endl;
    return 0;
}