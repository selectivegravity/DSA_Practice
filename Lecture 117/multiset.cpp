#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset <int> s;  // Duplicates are allowed
    s.insert(1);
    s.insert(1);
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
    s.erase(4);   // Delete all four's...
    s.erase(s.find(3));     // Delete Only the first one...
    cout<<endl;
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }
    
    cout<<endl;
    cout<<*s.lower_bound(2)<<endl;;
    cout<<*s.lower_bound(4)<<endl;
    cout<<*s.upper_bound(4)<<endl;
    //cout<<*s.upper_bound(5)==s.end()<<endl;
    return 0;
}