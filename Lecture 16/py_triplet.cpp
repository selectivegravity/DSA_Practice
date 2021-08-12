#include<iostream>
using namespace std;

bool py1(int x, int y, int z){

    cout<<"x is"<<x<<"y is "<<y<<"z is "<<z<<endl;

    if(x*x==(y*y+z*z)){
        return true;
    }

    else{
        return false;
    }

}


int py(int a,int b,int c){
    int x,y,z;
    if(a>b && a>c){
        int x=a;int y=b;int z=c;
    }
    if(b>a && b>c){
        int x=b;int y=a;int z=c;
    }
    else{
        int x=c;int y=b;int z=a;
    }

    return py1(x,y,z);
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if (py(a,b,c)){
        cout<<"pythagorian triplet"<<endl;
    }
    else{
        cout<<"not a pythsagorian triplet"<<endl;
    }
    return 0;
}