#include<iostream>
using namespace std;

/* void fact(int n){
    // Non tailed recursion...
    //base case...
    if(n==0){
        return;
    }
    fact(n-1);
    cout<<n<<" ";
} */

int fact(int n ,int a){
    // Tailed recursion...
    if(n==0){
        return a;
    }
    return fact(n-1,a*n);
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n,1);
    return 0;
}