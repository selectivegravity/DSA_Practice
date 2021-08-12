#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin>>str;            // for normal word input without space 
    cin.ignore();
    string str1(5,'n');   // for repeating any letter or word 
    string str2;
    getline(cin,str2);   // for input of whole sentence 
    cin.ignore();
    cout <<str<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;
    return 0;
}