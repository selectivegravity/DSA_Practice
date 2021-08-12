#include<bits/stdc++.h>
using namespace std;

class poly{
    public:
        void fun(){
            cout<<"No argument"<<endl;
        }
        void fun(int x){
            cout<<"one argument"<<endl;
        }
        void fun(double x){
            cout<<"double argument"<<endl;
        }
};

int main(){
    poly object;
    object.fun();
    object.fun(2);
    object.fun(3.4);
    return 0;
}