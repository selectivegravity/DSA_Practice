/***************************check for prime between 1-last***********************/
#include <iostream>
using namespace std;

int main(){

    int i,last;
    cin>>last;
    for (int num=2;num<=last;num++){
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }

    return 0;
}