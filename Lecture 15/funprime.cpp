/***************************Prime Number between a and b using function call stack************************/
#include <iostream>
#include <math.h>
using namespace std;

bool Prime(int num){

    for(int i=2;i<=sqrt(num);i++){

        if(num%i==0){
            return false;
        }

    }
    return true;
}

int main (){
    int a,b;
    cin>>a>>b;

    for(int j=a;j<=b;j++){

        if(Prime(j)){
            cout<<j<<endl;
        }
    }

    return 0;
}

