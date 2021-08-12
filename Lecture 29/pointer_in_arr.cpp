#include<iostream>
using namespace std;

int main(){
    char arr[6]={'a','b','c','d','e'};
    cout<<arr<<endl;                              // arr print
    char *parr=arr;
    cout<<*parr<<endl;                            // it gives arr[0]
    for(int i=0;i<5;i++){ // arr print using pointer by exceeding address with +1(for char) and +4(for integer)
        cout<<*parr;
        parr++;
    }
    cout<<endl;

    for(int i=0;i<5;i++){ // indexing +1
        cout<<*(arr+i);
    }


    return 0;
}