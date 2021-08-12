#include<iostream>
using namespace std;

/* int sum_num(int n){
    if(n==0){
        return 0;
    }
    return n%10+sum_num(n/10);
    //non tailed recurrsion...
} */

int sum_num(int n,int sum){
    if(n==0){
        return sum;
    }
    sum+=n%10;
    sum_num(n/10,sum);
    // Tailed recursion...
}

int main(){
    cout<<sum_num(-187,0);
    return 0;
}