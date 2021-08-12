#include<bits/stdc++.h>
using namespace std;

// Using adjcency list...
const int N=1e5+2;
bool visited[N];
vector<int> adjl[N];

int main(){
    // Initialise visited array with 0;
    for(int i=0;i<N;i++){
        visited[i]=0;
    }
    //Input no. of nodes and edges...
    int n,m;
    cin>>n>>m;

    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }

    queue <int> q;
    q.push(1);
    visited[1]=true;

    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        vector<int> :: iterator it;
        for(it=adjl[node].begin();it!=adjl[node].end();it++){
            // if not visited...
            if(!visited[*it]){
                q.push(*it);
                visited[*it]=true;
            }
        }
    }
    return 0;
}