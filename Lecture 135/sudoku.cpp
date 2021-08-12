#include<bits/stdc++.h>
using namespace std;

bool ispossible(int arr[9][9],int i,int j,int val){
    for(int col=0;col<9;col++){
        if(val==arr[i][col]){
            return false;
        }
    }
    for(int row=0;row<9;row++){
        if(val==arr[row][j]){
            return false;
        }
    }
    return true;
}

void sudoku(int arr[9][9],int i,int j){
    if(arr[i][j]=='.'){
        for(int k=1;k<=9;k++){
            if(ispossible(k)){
                arr[i][j]=k;
            }
            else{
                continue;
            }
        }
    }
}

int main(){
    
    return 0;
}