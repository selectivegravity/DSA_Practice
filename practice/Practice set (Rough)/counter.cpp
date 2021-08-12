#include<iostream>
#include<algorithm>
using namespace std;

bool compareInterval(int i1, int i2)
{
    return (i1 > i2);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num=0;
    for(int i=0;i<n;i++){
        num=max(num,arr[i]);
    }

    int idx[num+1];
    for(int i=0;i<=num;i++){
        idx[i]=0;
    }

    for(int i=0;i<n;i++){
        idx[arr[i]]++;
    }

    sort(idx, idx + num+1, compareInterval);

    while(idx[1]!=0){
        idx[0]-=1;
        idx[1]-=1;
        sort(idx, idx + num+1, compareInterval);
    }

    cout<<idx[0]<<"\n";
    }
    return 0;
}