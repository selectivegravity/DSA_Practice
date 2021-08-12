/* Input: n = 16
Output: 16, 11, 6, 1, -4, 1, 6, 11, 16

Input: n = 10
Output: 10, 5, 0, 5, 10 */

#include<iostream>
using namespace std;

void pattern(int n){
    if(n<=0){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";  // before return calls
    pattern(n-5);
    cout<<n<<" ";  // after return calls
}

int main(){
    pattern(16);
    return 0;
}