#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(auto &i: arr){
        cin>>i;
    }
    stack <int> st;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            st.push(i);
            int flag=0;
            while(arr[i]>=arr[i+1] && i<n-2){
                i++;
                flag=1;
            }
            while(arr[i]<arr[i+1] && i<n-1){
                i++;
                flag=2;
            }
            if(flag==2){
                i--;
            }
        }
    }
    while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
    }
    return 0;
}