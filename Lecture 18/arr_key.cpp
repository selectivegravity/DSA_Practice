#include <iostream>
using namespace std;

int indice(int n,int arr[],int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;

}

int main(){
    int n,num;
    cin>>n>>num;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<indice(n,array,num)<<endl;
    return 0;
}