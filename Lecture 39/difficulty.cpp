#include<iostream>
using namespace std;

void sum_num(int arr[],int n,int remove){
    if(arr[n]>remove){
        cout<<n+1<<endl;
        return;
    }
    if(arr[n]<remove){
        remove=remove-arr[n];
        return sum_num(arr,n-1,remove);
    }
    if(arr[n]==remove){
        for(int i=n-1;i>=0;i--){
            if(arr[i]!=0){
                cout<<i+1<<endl;
                return;
            }
        }
        return;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int arr[10];
        for(int i=0;i<10;i++){
            cin>>arr[i];
        }
        int remove;
        cin>>remove;
        sum_num(arr,9,remove);
    }
}