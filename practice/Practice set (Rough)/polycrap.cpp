#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m,x;
    int row,col;
    cin>>n>>m>>x;
    int arr1[n][m];
    int arr2[n][m];

    //by column
    int mount=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr1[j][i]=mount;
            if(mount==x){
                row=j;
                col=i;
            }
            mount++;
        }
    }

    //by row
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr2[i][j]=count;
            count++;
        }
    }

    cout<<arr2[row][col]<<endl;
    }
    return 0;
}