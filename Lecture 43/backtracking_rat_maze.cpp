#include<iostream>
using namespace std;

bool issafe(int** arr,int x,int y,int n){
    if(arr[x][y]==1 && x<n && y<n){
        return true;
    }
    return false;
}

bool rat_in_maze(int** arr,int x,int y,int n,int** sol_arr){
    if(x==n-1 && y==n-1){
        arr[x][y]=1;
        return true;
    }
    if(issafe(arr,x,y,n)){
        arr[x][y]==1;
        if(rat_in_maze(arr,x+1,y,n,sol_arr)){
            return true;
        }
        if(rat_in_maze(arr,x+1,y,n,sol_arr)){
            return true;
        }
        arr[x][y]=0;
        return false;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int** arr=new int *[n];
    for(int i=0;i<n;i++){
        arr[i]=new int [n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int** sol_arr=new int *[n];
    for(int i=0;i<n;i++){
        sol_arr[i]=new int [n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sol_arr[i][j]=0;
        }
    }
    rat_in_maze(arr,0,0,n,sol_arr);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<sol_arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}