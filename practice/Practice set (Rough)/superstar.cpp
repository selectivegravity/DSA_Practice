#include <iostream>
#include<math.h>
using namespace std;
  
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    int N,M;
    cin>>N>>M;
    double K;
    cin>>K;
    double arr[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>arr[i][j];
        }
    }
    int count=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            // iterating to each element ...
            int row=i;
            int col=j;
            double mainsum=0;
            while(row<N && col<M){
                int num=(col-j)*(row-i);
                    // vertical
                    for(int k=i;k<=row;k++){
                        mainsum+=arr[k][col];
                        num++;
                        if(double(mainsum)/double(num)>=K){
                            break;                            
                        }
                    }
                    // horizontal
                    for(int l=j;l<col;l++){
                        mainsum+=arr[row][l];
                        num++;
                        if(double(mainsum)/double(num)>=K){
                            break;                            
                        }          
                }               
                double avg=double(mainsum)/double(num);
                if(avg>=K){
                    count+=(min(N-row,M-col));
                    break;
                }
                row++;
                col++;
            }
        }
    }
    cout<<count<<endl;
    }
    
    return 0;
}