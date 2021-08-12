#include<iostream>
#include<string>
using namespace std;

void repeat(string str,int i){
    int n=str.length();
    if(i==n){
        return;
    }
    if(str[i]==str[i+1]){
        return repeat(str,i+1);
    }
    else if(str[i]!=str[i+1]){
        cout << str[i] << endl;
        return repeat(str,i+1);
    }

}

int main(){
    string str="aaaabbeeecdddd";
    repeat(str,0);
    return 0;
}