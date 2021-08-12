#include<iostream>
using namespace std;

int fabo(int N){
    if(N==0){
        return 0;
    }
    if(N==1){
        return 1;
    }
    return fabo(N-1)+fabo(N-2);
    }

int main(){
    int n;
    cin>>n;
    cout<<fabo(n)<<endl;
    return 0;
}