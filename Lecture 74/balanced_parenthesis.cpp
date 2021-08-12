#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    stack <char> st;
    bool flag = true;
    for(int i=0;i<s.length();i++){      
        while(s[i]=='{' || s[i]=='[' || s[i]=='('){
            st.push(s[i]);
            i++;
        }
        if((s[i]==')' && st.top()=='(') || (s[i]==']' && st.top()=='[') || (s[i]=='}' && st.top()=='{')){
            st.pop();
        }
        else{
            flag=false;
            break;
        }
    }
    return st.empty();
}

int main(){
    string s="{[()]}";
    cout<<check(s)<<endl;
    return 0;
}