#include<bits/stdc++.h>
using namespace std;

int getbit(int n,int pos){
    return (n&(1<<pos))!=0;
}

int setbit(int n,int pos){
    return (n)|(1<<pos);
}

int clearbit(int n,int pos){
    return (n)&(~(1<<pos));
}

int updatebit(int n,int pos,int val){
    int mask = ~(1<<pos);
    n=n&mask;
    return (n|val<<pos);
}
int main(){
    int n;cin>>n;
    int pos;cin>>pos;
    //cout<<getbit(n,pos)<<endl;
    //n=setbit(n,1);
    //cout<<n<<endl;
    //n=clearbit(n,pos);
    //cout<<n<<endl;
    cout<<updatebit(n,pos,1)<<endl;


    return 0;
}