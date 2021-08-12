#pragma GCC optimize("Ofast","unroll-loops","omit-frame-pointer","inline") //Optimization flags
#pragma GCC option("arch=native","tune=native","no-zero-upper") //Enable AVX
#pragma GCC target("avx2")  //Enable AVX
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

map <int,string> mappy;

void yipee(int n,int start,int k,string s,multiset <int> ml,int ans){
    if(k==0){
/*         int ans =1;
        string collector="";
        for(int i=0;i<s.length();i++){  
            if(s[i]!=' '){
                collector+=s[i];
            }
            else{
                ans^=(stoi(collector));
                collector="";
            }
        } */
        ans^=1;
        //mappy[ans]=s;
        cout<<ans<<" : "<<s<<endl;
        return;
    }
    if(start>n){
        return;
    }
    for(int i=start;i<=n;i++){
        string ch=to_string(i);
        ch+=" ";
        ans=ans^i;
        if(ml.find(i)==ml.end()){
        ml.insert(i);
        yipee(n,start+1,k-1,s+ch,ml,ans);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        mappy.clear();
    ll n,k;
    cin>>n>>k;
    multiset <int> ml;
    yipee(n,1,k,"",ml,1);
    map <int,string>::iterator it;
    it=mappy.end();
    it--;
    //cout<<it->first<<endl;
    cout<<it->second<<endl;
    }
    return 0;
}