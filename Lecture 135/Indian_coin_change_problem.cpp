#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,X;
    cin>>N>>X;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    sort(arr,arr+N);
    int coin_count=0;
    int m=N-1;
    while(m>=0 && X!=0){
        coin_count+=X/arr[m];
        if(X!=X%arr[m]){cout<<arr[m]<<" "<<X/arr[m]<<endl;}
        X=X%arr[m];
        m--;
    }
    cout<<coin_count<<endl;
    return 0;
}