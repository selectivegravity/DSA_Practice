#include <iostream>
using namespace std;

int sortnum(int n,int arr[]){
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            int k;
            if(arr[i]>arr[i+1]){
                k=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=k;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }

}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<sortnum(n,array)<<endl;
    return 0; 
}