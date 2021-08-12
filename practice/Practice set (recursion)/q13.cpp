#include<iostream>
using namespace std;

void incorder(int n){
    if(n==0){
        cout<<endl;
        return;
    }
    incorder(n-1);
    cout<<n<<" ";
}

void decorder(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    decorder(n-1);   
}

int main(){
    //incorder(10);
    //cout<<" div "<<endl;
    decorder(10);
    return 0;
}