/*************************BINARY SEARCHING*********************************************/
#include <iostream>
using namespace std;

int binsearch(int n,int array[],int key){
    int s=0,e=n-1;
    if(array[s]==array[e]){
        return s;
    }
    else{
        while(s<=e){
            int mid=(s+e)/2;
            if(array[mid]==key){
                return mid;
            }
            else if(array[mid]>key){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
    }
    return -1;
}

int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cin>>num;
    cout<<binsearch(n,arr,num)<<endl;
    return 0;
}

