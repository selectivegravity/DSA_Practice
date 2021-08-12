// Refer notes ...
#include<iostream>
using namespace std;

int knapsack(int value[],int wt[],int n,int W){
    if(n==0 || W<=0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapsack(value,wt,n-1,W);
    }
    return max(knapsack(value,wt,n-1,W),knapsack(value,wt,n-1,W-wt[n-1])+value[n-1]);
}

int main(){
    int wt[]={10,20,30},value[]={100,50,150},n=3,W=50;
    cout<<knapsack(value,wt,n,W);
    return 0;
}