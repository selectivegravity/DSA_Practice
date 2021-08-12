#include<bits/stdc++.h>
using namespace std;
int N=1e5+2;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adjl[N];
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }
    for(int i=1;i<n+1;i++){
        cout<<i<<"->";
        for(auto x:adjl[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}