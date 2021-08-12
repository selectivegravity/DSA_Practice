#include <iostream>
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
    bool flag=false;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==element){
                flag=true;break;
            }
        }
        if(flag){
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