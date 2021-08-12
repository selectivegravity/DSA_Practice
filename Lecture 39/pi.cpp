#include<iostream>
#include<string>
using namespace std;

void pr_rep(string str,int i){
    int n=str.length();
    if(i==n){
        return;
    }
    if(str[i]=='p' && str[i+1]=='i'){
        cout<<3.14;
        return pr_rep(str,i+2);
    }
    else{
        cout<<str[i];
        return pr_rep(str,i+1);
    }
}

int main (){
    string str ="pippxxppiixipi";
    pr_rep(str,0);
    return 0;
}