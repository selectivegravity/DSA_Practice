/*************** SINGLE INHERITANCE ****************************

#include<iostream>
using namespace std;

class A{
    public:
        void func(){
            cout<<"inherited"<<endl;
        } 
};

class B:public A{     // Here class B have all public and protected attributes as public of class B...
};

int main(){
    B object;
    object.func();
    return 0;
}

********************************************************************/

/****************** MULTIPLE INHERITANCE ****************************

#include<iostream>
using namespace std;

class A{
    public:
        void funcA(){
            cout<<"inherited CLASS A"<<endl;
        } 
};

class B{
    public:
        void funcB(){
            cout<<"inherited CLASS B"<<endl;
        } 
};

class C:public A,public B{     // Here class B have all public and protected attributes as public of class B...
};

int main(){
    C object;
    object.funcA();
    object.funcB();
    return 0;
}

*********************************************************************/

/******************* MULTI LEVEL INHERITANCE ************************

#include<iostream>
using namespace std;

class A{
    public:
        void funcA(){
            cout<<"inherited CLASS A"<<endl;
        } 
};

class B:public A{
    public:
        void funcB(){
            cout<<"inherited CLASS B"<<endl;
        } 
};

class C:public B{     // Here class B have all public and protected attributes as public of class B...
};

int main(){
    C object;
    object.funcA();
    object.funcB();
    return 0;
}

******************************************************************************/

#include<iostream>
using namespace std;

class A{
    public:
        void funcA(){
            cout<<"inherited CLASS A"<<endl;
        } 
};

class B:public A{
    public:
        void funcB(){
            cout<<"inherited CLASS B"<<endl;
        } 
};

class C{
    public:
    void funcC(){
        cout<<"inherited CLASS C"<<endl;
    }
};

class D:public B,public C{     // Here class B have all public and protected attributes as public of class B...
};

int main(){
    D object;
    object.funcA();
    object.funcB();
    object.funcC();
    return 0;
}

