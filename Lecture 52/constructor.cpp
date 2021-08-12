#include<iostream>
using namespace std;

class student {
    public:
    string name;
    int age;
    bool gender;

    student (string s,int a,int gen ){     // constructor ( className(intput){body} )... contructor calls automatically itself
        name=s;                           // parameterised constructor
        age=a;
        gender=gen;
    }

    student (){                          // default constructor 
        cout<<"default"<<endl;
    }

    ~student (){
        cout<<"destroyed"<<endl;        // call and the end for return 0 and destroy a,b,c individually
    }

    bool operator == (student &a){     // operator overloading ...
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }

    student (student &anystudent){
        name=anystudent.name;
        age=anystudent.age;
        gender=anystudent.gender;
    }

    void getname(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }

};

int main(){
    student a("aman",20,1);   // parameterised constructor
    a.getname();
    student b;                // default constructor
    student c(a);             // deep copy constructor
    c.getname();
    if(c==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
    return 0;
}