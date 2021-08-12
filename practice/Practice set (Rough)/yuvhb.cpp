#include<iostream>   
#include<algorithm>   
using namespace std;

bool comp(int a, int b)   
{   
    return (a < b);   
}  

int main(){    
    int testcase;
    cin>>testcase;
    for(int i=0;i<testcase;i++){
        int n,m;cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }

        int max_num=INT8_MIN;
        for( int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                max_num=max(arr[i][j],max_num);
            }           
        } 
        cout<<max_num<<" ";

        int parr[n][m],count=0;

            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    parr[i][j]=max({arr[i-1][j],arr[i-1][j-1],arr[i-1][j+1],arr[i+1][j],arr[i+1][j-1],arr[i+1][j+1],arr[i][j-1],arr[i][j+1]},comp);
                }
            }

            


    }


    
  
    
return 0;   
}  