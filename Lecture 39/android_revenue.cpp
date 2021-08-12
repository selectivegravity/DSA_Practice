#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr + n, greater<long long>()); 
   
    for (int i = 0; i < n; ++i){
        arr[i]*=(i+1);
    }

    sort(arr, arr + n, greater<long long>());
    cout<<arr[0]<<endl;
 
    return 0; 
}