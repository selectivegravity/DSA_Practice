#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2;
bool visited[N];
vector <int> adjl[N];

void dfs(int node){
    // Preorder...
    cout<<node<<" ";
    visited[node]=1;
    
    //inorder...
    vector <int> :: iterator it;
    for(it=adjl[node].begin();it!=adjl[node].end();it++){
        if(!visited[*it]){
            dfs(*it);
        }
    }

    //Postorder...

}

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=0;i<N;i++){
        visited[i]=false;
    }

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }
    dfs(1);

    return 0;
}