#include<iostream>
using namespace std;

int sum_num(int n){
    //base case...
    if(n==1){
        return 1;
    }
    return n+sum_num(n-1);
}

int main(){
    cout<<sum_num(5);
    return 0;
}