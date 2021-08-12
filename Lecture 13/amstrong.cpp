#include <iostream>
using namespace std;

int main(){
    int n,ams,lastdigit;
    cin>>n;
    ams=0;
    int m=n;


    while(n>0){
        lastdigit=n%10;
        ams+=lastdigit*lastdigit*lastdigit;
        n=n/10;
    }

    cout<<ams<<endl;

    if(ams==m){
        cout<<"yes"<<endl;
    }

    else{
        cout<<"No"<<endl;
    }

    return 0;
}