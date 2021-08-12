/* Given a decimal number as input, we need to write a program to convert the given decimal number into equivalent binary number. 

Examples : 

Input : 7                                                         
Output :111

Input :10
Output :1010 */

#include<iostream>
using namespace std;

void deci_2_bin(int n){
    if(n==0){
        return ;
    }
    deci_2_bin(n/2);
    cout<<n%2<<" ";
}

int main(){
    deci_2_bin(7);
    return 0;
}