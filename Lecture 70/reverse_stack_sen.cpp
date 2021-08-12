#include<iostream>
#include<stack>
using namespace std;

void reverse(string s){
    stack <string > st;
    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }

    // display

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    string s="How you doing, bish?";
    reverse(s);
    return 0;
}