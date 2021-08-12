/* Input : arr[] = {a, b}, 
          len = 2.
Output :
a b aa ab ba bb */

#include<iostream>
using namespace std;

void password(char arr[],string ans,int len){
    if(len==0){
        cout<<ans<<" ";
        return ;
    }
    for(int i=0;i<3;i++){    // will make a string of length len..
        password(arr,ans+arr[i],len-1);
    }
}

int main(){
    char arr[]={'a','b','c'};
    for (int i = 1; i <= 3; i++) {
        password(arr,"",i);
    }
    return 0;
}