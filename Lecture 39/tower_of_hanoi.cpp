#include<iostream>
#include<string>
using namespace std;

void tower(string str,string source,string helper,string destination){
    int n=str.length();
    if(n==1){
        return;
    }
    cout<<source<<" "<<helper<<" "<<destination<<endl;
    source=helper;
    helper='\0';
    tower(str,source,helper,destination);
}

int main(){
    string str="123";
    tower(str,'\0','\0','\0');
    return 0;
}