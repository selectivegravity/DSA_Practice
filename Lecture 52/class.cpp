#include<iostream>
using namespace std;

class student {   
    string name;
    public:         // to make it accessible throughout the programme
    
    int age;
    bool gender;
    void printInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }
    void setname(string s){
        name=s;
    }
};

int main(){
    student arr[3];
    for(int i=0;i<3;i++){
        string s;
        cin>>s;
        arr[i].setname(s);
        cin>>arr[i].age;
        cin>>arr[i].gender;
    }
    for(int i=0;i<3;i++){
        arr[i].printInfo();
    }
    return 0;
}