#include<bits/stdc++.h>
using namespace std;

int main(){
    set <int> s;
    int t=5;
    while(t--){
        int num;cin>>num;
        s.insert(num);
    }
    cout<<*s.find(4)<<endl;

    return 0;
}