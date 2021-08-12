#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    vector <int> indegree(n,0);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        indegree[y]++;
    }

    queue <int> q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    int cnt=0;

    while(!q.empty()){
        cnt++;
        int x=q.front();
        q.pop();
        cout<<x<<" ";
        for(auto it:adj[x]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    return 0;
}