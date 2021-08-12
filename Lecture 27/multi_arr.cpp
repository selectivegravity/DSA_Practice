#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;cin>>n1>>n2>>n3;
    int arr1[n1][n2],arr2[n2][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>arr2[i][j];
        }
    }

    int multi[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            multi[i][j]=0;
        }
    }
    for(int i=0;i<n1;i++){
        for(int k=0;k<n3;k++){
            for(int j=0;j<n2;j++){
                multi[i][k]+=arr1[i][j]*arr2[j][k];
            }
        }
        cout<<endl;
    }

    for(int i=0;i<n1;i++){
        for(int k=0;k<n3;k++){
            cout<<multi[i][k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}