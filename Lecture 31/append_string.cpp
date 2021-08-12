#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1="fam";
    string s2="ily";
    cout<<s1 + s2 <<endl;
    cout<<endl;
    s1.append(s2);     // here s1 changes from "fam" to "family"...
    cout<<s1<<endl;
    cout<<endl;
    cout<<s1[2]<<endl;  // for individual indexing...
    cout<<endl;
    s1.clear();        /// for clearing the stored data in string...
    cout<<s1<<"      clear check";
    return 0;
}