#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>vi(n);
    for(auto &i:vi){
        cin>>i;
    }
    vector <int> ans;
    multiset<int,greater<int>>s; // Basically we are making a multiset desending...
    for(int i=0;i<k;i++){
        s.insert(vi[i]);
    }
    ans.push_back(*s.begin());
    for(int i=k;i<n;i++){
        s.erase(s.lower_bound(a[i-x]));
        s.insert(a[i]);
        ans.insert(*s.begin());
    }
    for(auto &i: ans){
        cout<<i;
    }
    return 0;
}