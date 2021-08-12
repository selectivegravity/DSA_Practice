#include<iostream>
using namespace std;

bool prime_check(int n){
    static int i=2;
    if(i==n){
        return true;
    }
    if(n%i==0){
        return false;
    }
    prime_check(n);
}

int main(){
    cout<<prime_check(111);
    return 0;
}