#include<bits/stdc++.h>
using namespace std;

int main(){
/*     map <int , int> m;
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
        m[arr[i]]=0;
    }
    for(int i=0;i<N;i++){
        m[arr[i]]++;
    }
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" "<<m[arr[i]]<<endl;
    } */
    map <int , int > m;
    int N;
    cin>>N;
    vector <int> arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    map <int , int> :: iterator it;
    // map iteration skills ...
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}