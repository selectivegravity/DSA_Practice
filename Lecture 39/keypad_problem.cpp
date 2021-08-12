// print all possible words from phone digits
#include<iostream>
using namespace std;

string keyword[]={"","./","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};

void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char num=s[0];
    string code =keyword[num-'0'];
    string rest_of_string=s.substr(1);
    for(int i=0;i<3;i++){
        keypad(rest_of_string,ans+code[i]);
    }
}

int main() {
    keypad("23","");
    return 0;
}