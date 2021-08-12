/**************wanna skip number which is divisible by 3 between 1-100*************************/
#include <iostream>
using namespace std;

int main(){

    for(int num=1;num<=100;num++){
        if(num%3==0){
            continue;
        }
        cout<<num<<endl;
    }
    return 0;
}