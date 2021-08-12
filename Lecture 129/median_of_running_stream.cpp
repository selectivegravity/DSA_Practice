#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>> pqmax;
priority_queue<int,vector <int> ,greater<int>> pqmin;

void insert(int val){
    if(pqmax.size()==pqmin.size()){
        if(pqmax.size()==0){
            pqmax.push(val);
        }
        else{
            if(pqmin.top()<=val){
                pqmax.push(pqmin.top());
                pqmin.pop();
                pqmin.push(val);
            }
            else{
                pqmax.push(val);
            }
        }
    }
    else{
        if(pqmax.size()>pqmin.size()+1){
            pqmin.push(pqmax.top());
            pqmax.pop();
        }
        if(pqmax.size()>pqmin.size()){
            if(val<pqmax.top()){
                pqmin.push(pqmax.top());
                pqmax.pop();
                pqmax.push(val);
            }
            else{
                pqmin.push(val);
            }       
        }
    }
}

int main(){
    int arr[6]={10,15,21,30,18,19};
    for(int i=0;i<6;i++){
        insert(arr[i]);
        if(pqmin.size()<pqmax.size()){
            cout<<pqmax.top()<<" ";
        }
        else{
            cout<<(float(pqmax.top())+float(pqmin.top()))/2<<" ";
        }
    }
    return 0;
}