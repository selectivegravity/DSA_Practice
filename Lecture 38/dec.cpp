#include<iostream>
using namespace std;

void dec(int N){

    if(N==0){
        return;
    }

    cout<<N<<endl;
    dec(N-1);
}

void inc(int N){
    if(N==0){
        return;
    }
    inc(N-1);
    cout<<N<<endl;
}


int main(){
    int n;
    cin>>n;
    dec(n);
    cout<<endl;
    inc(n);
    return 0;
}