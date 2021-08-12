#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;m-=1;
    }
    return 0;
}