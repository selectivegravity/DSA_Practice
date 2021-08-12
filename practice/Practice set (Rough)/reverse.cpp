#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int lastdigit,reverse=0;
    while(n!=0){
        reverse*=10;
        lastdigit=n%10;
        reverse=(reverse+lastdigit);
        n=n/10;
    }
    cout<<reverse;
    return 0;
}