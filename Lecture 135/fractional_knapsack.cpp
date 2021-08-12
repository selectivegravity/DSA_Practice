//we are given 'n' items with {weight , value} of each items and 
// the capacity of knapsack 'W' . we need to put these items in 
// knapsack such that the final value of items in knapsack is max
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,w;
    cin>>n>>w;
    vector <vector<float>> v;
    for(int i=0;i<n;i++){
        float weight,value;
        cin>>weight>>value;
        v.push_back({value/weight,weight});
    }
    sort(v.begin(),v.end(),[&] (vector<float>&a,vector<float>&b) { return a[0]>b[0];});
    for(int i=0;i<n;i++){
        cout<<v[i][0]<<" "<<v[i][1]<<endl;
    }
    int i=0;
    int ans=0;
    while(i<n){
        if(w>=v[i][1]){
            w=w-v[i][1];
            ans+=v[i][0]*v[i][1];
            i++;
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}