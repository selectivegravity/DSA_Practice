#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(auto &i: arr){
        cin>>i;
    }
/*     int max_area=0;int mini=INT32_MAX;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            mini=min(arr[j],mini);
            max_area=max(max_area,mini*(j-i+1));         
        }
    }
    cout<<max_area<<endl; */

    stack <int> st;
    int mini_tower=INT32_MAX;
    for(int i=0;i<n;i++){
        if(st.top()=<arr[i]){
            st.push(arr[i]);
        }
        else{
            while(!st.empty()){
                
            }
        }
    }
}