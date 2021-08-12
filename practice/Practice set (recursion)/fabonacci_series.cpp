#include<iostream>
using namespace std;

int fabonacci(int n){      // n is basically position...
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fabonacci(n-1)+fabonacci(n-2); // as we are calling it twice it'll build a chain for sure
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fabonacci(i)<<" ";
    }
    return 0;
}