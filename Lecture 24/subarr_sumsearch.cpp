#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;cin>>sum;
    int s=0,e=0;
    int current_sum=0;
    int N=n*(n+1)/2;


    for (int i=0;i<N;i++){
        if(current_sum<sum){
            current_sum=current_sum+arr[e];
            e+=1;
        }
        else if(current_sum==sum){
            cout<<s<<" "<<e-1<<endl;
            s+=1;
            e=s;
            current_sum=0;
        }
        else if(current_sum>sum){
            s+=1;
            e=s;
            current_sum=0;
        }
    }
    return 0;
}