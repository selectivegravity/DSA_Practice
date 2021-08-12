/* Program for Sum of the digits of a given number

    Difficulty Level : Easy
    Last Updated : 15 Apr, 2021

Given a number, find sum of its digits.

Examples : 

Input : n = 687
Output : 21

Input : n = 12
Output : 3 */

#include<iostream>
using namespace std;

int sumdig(int n,int ans){
    if(n==0){
        return ans;
    }
    sumdig(n/10,ans+n%10);
}

int main(){
    cout<<sumdig(625,0);
}