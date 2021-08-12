#include<iostream>
using namespace std;

int main(){

    int n,num;
    cin>>n;
    num=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout<<num<<" ";num++;
            }
        }
        cout<<endl;
    } 

    return 0;
}