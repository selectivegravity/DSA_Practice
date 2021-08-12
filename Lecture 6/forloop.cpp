/* Sum of n natural numbers */
#include <iostream>
using namespace std;

int main(){
    int num,sum;
    cin>>num;
    sum=0;
    for(int counter=1;counter<=num;counter++){
        sum=sum+counter;
    }
    
    cout<<sum;
    return 0;
}