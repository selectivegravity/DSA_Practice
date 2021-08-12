#include<bits/stdc++.h>
using namespace std;


int findcomplement(int n){
    int result =0;
    int i=0;
    while(n){
        if((n&1) == 0 ){
            result += 1<<i;
        }
        i+=1;
        n>>=1;
    }

    return result;
}
int main(){
    int n=10;
    int m=findcomplement(n);
    cout<<m<<endl;
}
