/****************************max till i************************************/
#include <iostream>
using namespace std;

int main (){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=INT32_MIN;
    int j=0;
    while(j<n){
        if(arr[j]>mx){
            mx=arr[j];
            arr[j]=mx;
        }
        else{
            arr[j]=mx;
        }
        j++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

/* int main(){
    int N;
    cin>>N;
    int arr[N];
    int maxi=INT16_MIN;
    for(int i=0;i<N;i++){
        cin>>arr[i];
        maxi=max(arr[i],maxi);
    }
    cout<<maxi<<endl;
} */