/*****************************CALCULATOR*********************/
#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    char opera;
    cin>>n1>>n2>>opera;

    switch(opera){

        case 's':
            cout<<n1+n2<<endl;
            break;

        case 'm':
            cout<<n1*n2<<endl;
            break;

        case 'd':
            cout<<n1/n2<<endl;
            break;
    }

    return 0;
}