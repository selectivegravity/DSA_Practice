#include<iostream>
#include <math.h>
using namespace std;

int bin2deci(int a){
    int deci=0,i=0;
    while(a>0){
        int lastdigit=a%10;
        deci+=lastdigit*pow(2,i);
        cout<<lastdigit*pow(2,i)<<endl;
        a/=10;i++;
    }
    return deci;
}

int main(){
    int n;
    cin>>n;
    cout<<bin2deci(n)<<endl;
    return 0;
}