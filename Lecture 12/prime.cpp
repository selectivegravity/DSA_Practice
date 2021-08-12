#include <iostream>
#include <cmath>
using namespace std;

int main (){

    int n,flag;
    cin>>n;
    flag=0;

    for(int i=2;i<=sqrt(n);i++){

        if (n%i==0){
            flag=1;
            break;
        }
    }

    if(flag==1){
        cout<<"Non Prime"<<endl;
    }

    else{
        cout<<"Prime"<<endl;
    }
    return 0;
}