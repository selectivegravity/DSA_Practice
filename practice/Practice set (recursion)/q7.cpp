/* Input : n = 5, val = 1
Output : 5
Explanation:
x1 + x2 + x3 + x4 + x5 = 1
Number of possible solution are : 
(0 0 0 0 1), (0 0 0 1 0), (0 0 1 0 0),
(0 1 0 0 0), (1 0 0 0 0)
Total number of possible solutions are 5

Input : n = 5, val = 4
Output : 70
Explanation:
x1 + x2 + x3 + x4 + x5 = 4
Number of possible solution are: 
(1 1 1 1 0), (1 0 1 1 1), (0 1 1 1 1), 
(2 1 0 0 1), (2 2 0 0 0)........ so on......
Total numbers of possible solutions are 70 */

#include<iostream>
using namespace std;

int numbersol(int n,int val){
    int count=0;
    if(n==1 && val>=0){
        return 1;
    }
    for(int i=0;i<=val;i++){
        count+=numbersol(n-1,val-i);
    }
    return count;
}

int main(){
    cout<<numbersol(5,1);
    return 0;
}