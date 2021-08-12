#include<iostream>
#include<math.h>
using namespace std;

int hcf_func(int n1,int n2){
    int hcf=1;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            hcf=i;
        }
    }
    return hcf;
}

int lcm_func(int n1,int n2){
    for(int i=min(n1,n2);i<=n1*n2;i++){
        if(i%n1==0 && i%n2==0){
            return i;
            break;
        }
    }
}

int main() {
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int N1,N2;
        cin>>N1>>N2;
        cout<<hcf_func(N1,N2)<<" "<<lcm_func(N1,N2)<<endl;
    }
    return  0;
}
