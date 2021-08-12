#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

/******************* RECURSION METHOD *****************

// void permutation(string s,int n,string ans){
//     if(n==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<n;i++){
//         char num=s[i];
//         string rest_of_string=s.substr(0,i)+s.substr(i+1,n);
//         permutation(rest_of_string,n-1,ans+num);
//     }

// }
// int main(){
//     int n;cin>>n;
//     string s;
//     cin>>s;
//     cout<<s;
//     permutation(s,n,"");
//     return 0;
// }