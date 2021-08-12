#include<iostream>
using namespace std;

int countpath(int i,int j,int n){

    if(i==n-1 && j==n-1){
        return 1;
    }

    if(i>=n ||j>=n){
        return 0;
    }
    return countpath(i+1,j,n) + countpath(i,j+1,n);
}

int main(){
    cout<<countpath(0,0,3);
    return 0;
}