#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--){
    vector <pair<int,char >>vi;
    int F,C;
    cin>>F>>C;
    for(int i=0;i<F;i++){
        int num;cin>>num;
        vi.push_back(make_pair(num,'F'));
    }
    for(int i=0;i<C;i++){
        int num;cin>>num;
        vi.push_back(make_pair(num,'C'));
    }
    sort(vi.begin(), vi.end());
    char curr=vi[0].second;
    int count=0;
    if(vi[0].second!='F'){
        count=1;
    }
    for(int i=0;i<F+C;i++){
        if(curr!=vi[i].second){
            curr=vi[i].second;
            count++;
        }
    }
    cout<<count<<"\n";
    }
    return 0;
}