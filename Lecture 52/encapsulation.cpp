#include<iostream>
using namespace std;

class cap{
    public:
    int a;
    void funcA(){
        cout<<"function A"<<endl;
    }
    private:
    int b;
    void  funcB(){
        cout<<"function B"<<endl;
    }
    protected:
    int c;
    void funcC(){
        cout<<"function C"<<endl;
    }
};

int main(){
    cap A;
    A.funcA();
    cap B;
    B.funcB();           // function B is private 
    cap C;
    C.funcC();           // function C is protected ...
    

    return 0;
}