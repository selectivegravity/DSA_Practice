#include <iostream>
using namespace std;

void swap(int *aptr,int *bptr){
    int temp;
    temp=*aptr;
    *aptr=*bptr;
    *bptr=temp;
}

int main (){
    int a=2,b=4;
    int *aptr=&a;
    int *bptr=&b;
    swap(*aptr,*bptr);              // OR we can use swap(&a,&b)
    cout<<"a="<<*aptr<<" b="<<*bptr;
    return 0;
}