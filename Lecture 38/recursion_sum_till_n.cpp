#include<iostream>
using namespace std;

int sum_till(int N){

    if(N==0){
        return 0;
    }
    int previous_sum=sum_till(N-1);
    return N+previous_sum;
}

int main(){
    int n;
    cin>>n;
    cout<<sum_till(n)<<endl;
    return 0;
}