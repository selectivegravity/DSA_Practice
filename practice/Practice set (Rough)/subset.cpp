#include<iostream>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    string a;
    cin>>a;
    string b;
    cin>>b;
    string sub1,sub2;
    int final=0;
    int n1=a.length();
    int n2=b.length();
    for(int i=1;i<=n1;i++){
        for(int j=0;j<=n1-i;j++){
            sub1=a.substr(j,i);
            for(int k=0;k<=n2-i;k++){
                sub2=b.substr(k,i);
                if(sub1==sub2){
                    final=i;
                }
            }            
        }
    }
    cout<<n1+n2-2*final<<"\n";
    }
    return 0;
}