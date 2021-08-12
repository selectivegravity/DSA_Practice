#include<bits/stdc++.h>
using namespace std;

int main(){
    map <int,int> m;
    int N;
    cin>>N;
    vector <int> v(N),prefsum(N);
    int sum=0;
    for(int i=0;i<N;i++){
        cin>>v[i];
        sum+=v[i];
        m[sum]++;
    }
    map <int,int> :: iterator it;
    int ans=0;
    for(it=m.begin();it!=m.end();it++){
        int c=it->second;
        if(it->first!=0){
            ans+=c*(c-1)/2;
        }
        else{
            ans+=c;
        }
    }
    cout<<ans<<endl;
    return 0;
}