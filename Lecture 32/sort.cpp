#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str = " 4465789";
    sort(str.begin(),str.end(),greater<int>());
    cout<<str<<endl;

    return 0;
}
