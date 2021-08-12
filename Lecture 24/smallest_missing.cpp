#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int N=1e6+2;
    bool idx[N];
    for(int i=0;i<N;i++){
        idx[i]=false;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            idx[arr[i]]=arr[i];
        }
    }
    for(int i=0;i<N;i++){
        if(idx[i]!=false){
            continue;
        }
        else if(idx[i]==false){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}