#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool mycomp(pair< int,int>p1,pair <int,int>p2){
    return p1.second<p2.second;
}

bool check(vector<int>dustbin,int num){
    for(int i=0;i<dustbin.size();i++){
        if(num==dustbin[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[]={1,3,4,3,1,1,2,4,4,4,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector <int> dustbin;
    vector <pair<int , int>>v;
    for(int i=0;i<n;i++){
        if(check(dustbin,arr[i])){
            int count=1;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            v.push_back(make_pair(arr[i],count));
            dustbin.push_back(arr[i]);
        }
    }
    sort(v.begin(),v.end(),mycomp);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].second;j++){
            cout<<v[i].first<<" ";
        }
    }
    return 0;
}