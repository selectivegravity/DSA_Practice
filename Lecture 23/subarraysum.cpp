#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<" ";           
        }
        cout<<endl;
    }
    return 0;
}

/* void subarr(int arr[],int i,int sum){
    if(i==6){
        return;
    }
    cout<<sum+arr[i]<<" ";
    subarr(arr,i+1,sum);
}

int main(){
    int arr[6]={1,5,3,7,4,9};
    for(int i=0;i<6;i++){
        subarr(arr,i,0);
    }
} */