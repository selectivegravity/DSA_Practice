#include<iostream>
#include <string>
#include<algorithm>
using namespace std;

int main(){
    string s1="nincompoop";
    string s2="nincompoop";
    cout<<s1.compare(s2)<<endl;
    if(!s1.compare(s2)){
        cout<<"matched!"<<endl;
    }
    else{
        cout<<"Not matched!"<<endl;
    }

    if(s1.empty()){                          // empty function example...
        cout<<" string is empty"<<endl;
    }

    else{
        cout<<"string is not empty"<<endl;
    }

    s1.erase(3,4);                          // string_name.erase(starting_index_name,count)
    cout<<s1<<endl;

    cout<<s2.find("com")<<endl;            // this function gives out the starting index place of the searched string
    cout<<s2.insert(2,"lol")<<endl;        // to insert in format of string_name.insert(starting_index_position,"string")

    cout<<s1.size()<<endl;              /// length function and size function are same operation function
    cout<<s2.length()<<endl;

    for(int i=0;i<s2.length();i++){
        cout<<s2[i]<<endl;
    }

    string substring=s2.substr(6,4);
    cout<<substring<<endl;            /// function format string_name.substr(starting_index,count)
    sort(s2.begin(),s2.end());
    cout<<s2<<endl;                   /// sort in lexicographically manner...


    return 0;
}