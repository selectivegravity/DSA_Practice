#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //sort(v.begin(),v.end());
    int min,max;
    max=min=0;
    for(int i=0;i<4;i++){
        min+=v[i];
    }
    for(int i=n-1;i>=n-4;i--){
        max+=v[i];
    }
    cout<<min<<" "<<max;
    return 0;
}