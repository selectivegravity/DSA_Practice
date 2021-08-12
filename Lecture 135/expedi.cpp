#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,fuel;cin>>n>>fuel;
    vector <vector<int>> v;
    for(int i=0;i<n;i++){
        int distance,amount;
        cin>>distance>>amount;
        v.push_back({distance,amount});   // distance ---> distance from truck  , amount---> amount of fuel in station
    }
    sort(v.begin(),v.end(),[&](vector<int> &a,vector<int> &b){ return a[1]>a[2];});
    return 0;
}