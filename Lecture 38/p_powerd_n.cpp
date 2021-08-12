#include<iostream>
using namespace std;

int powered(int num,int power){
    if(power==0){
        return 1;
    }
    return num*powered(num,power-1);
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<powered(n,p)<<endl;
    return 0;
}