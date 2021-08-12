#include<iostream>
using namespace std;

void factors (int start,int n ,string ans) {
    if(n==1){
        cout<<ans<<endl;
        return;
    }
    for(int i=start;i<=n;i++){
        if(n%i==0){
            ans+=to_string(i);
            ans+=" ";
            factors (i,n/i,ans);
        }
    }
}

int main(){
    factors (2,100,"");
    return 0;
}