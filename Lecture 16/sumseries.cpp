/*********************Sum of n natural Numbers using for loop************************************/
#include <iostream>
using namespace std;

int sum(int n){
    int sum=0;

    for(int i=1;i<=n;i++){
        sum+=i;
    }

    return sum;
}

int main (){
    int m;
    cin>>m;
    cout<<sum(m)<<endl;
    return 0;
}

