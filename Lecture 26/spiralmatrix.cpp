#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int col_start=0,row_start=0,col_end=m-1,row_end=n-1;
    while(col_start<=col_end && row_start<=row_end){
        for(int j=col_start;j<col_end;j++){
            cout<<arr[row_start][j]<<" ";
        }
        for(int i=row_start;i<row_end;i++){
            cout<<arr[i][col_end]<<" ";
        }
        for(int j=col_end;j>col_start;j--){
            cout<<arr[row_end][j]<<" ";
        }
        for(int i=row_end;i>row_start;i--){
            cout<<arr[i][col_start]<<" ";
        }
        col_start+=1;
        row_start+=1;
        col_end-=1;
        row_end-=1;
    }
    return 0;
}