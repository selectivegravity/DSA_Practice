#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set <int> s;    // No sorting && Duplicates are still not allowed ...
    s.insert(1);              // No concept of lower/upper bond ...
    s.insert(1);              // Have edge over time compexity insert deletion of O(1) ...
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(5);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    s.erase(s.begin());
    s.erase(3);
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    //cout<<*s.upper_bound(5)==s.end()<<endl;
    return 0;
}