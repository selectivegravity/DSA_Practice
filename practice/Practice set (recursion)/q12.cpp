#include<iostream>
using namespace std;

bool sorted(int arr[],int s,int e){
    if(s==e){
        return true;
    }
    if(arr[s]<=arr[s+1]){
        sorted(arr,s+1,e);
    }
    else{
        return false;
    }
}

int main(){
    int arr[5]={1,2,3,4,4};
    cout<<sorted(arr,0,4)<<endl;
    return 0;
}