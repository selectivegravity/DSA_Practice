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
    char a=1;
    char b=2;
    int c=3;
    int d=4;
    int e=5;
    int f=6;
    int h=7;
    int g=8;
    int ans=a^b^c^e^f^g^h;
    cout<<ans<<endl;
    return 0;
}