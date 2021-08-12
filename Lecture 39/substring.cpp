#include<iostream>
#include<string >
using namespace std;

void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string rest_of_string = s.substr(1);
    subseq(rest_of_string,ans+ch);
    subseq(rest_of_string,ans);
}

int main(){
    subseq("ABC","");
    return 0;
}