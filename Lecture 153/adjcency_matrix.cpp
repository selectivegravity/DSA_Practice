#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector <vector<int>> adjm(n+1,vector<int> (n+1,0));
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adjm[x][y]=1;
        adjm[y][x]=1;
    }
    // Cout the adjency matrix of above graph...
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}