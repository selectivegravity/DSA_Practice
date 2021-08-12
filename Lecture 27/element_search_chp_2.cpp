#include<iostream>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    int element;cin>>element;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int i=0,j=m-1;
    bool flag=0;
    while(i<n && j>=0){
        if(element<arr[i][j]){
        j--;
        }
        else if(element>arr[i][j]){
        i++;
        }
        else{
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}