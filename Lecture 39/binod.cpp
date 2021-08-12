#include<iostream>
#include<string>
using namespace std;

void reverse(string str,int n,int i){
    if(i==n){
        return;
    }
    reverse(str,n,i+1);
    cout << str[i]<<endl;
}

int main(){
    string str="BINOD";
    int n=str.length();
    reverse(str,n,0);

    return 0;
}