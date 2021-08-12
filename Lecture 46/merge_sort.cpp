#include<iostream>
using namespace std;

void merge(int arr[],int s,int mid,int e){
    int arr1[mid-s+1];
    int arr2[e-mid];

    for(int i=0;i<mid-s+1;i++){
        arr1[i]=arr[s+i];
    }

    for(int i=0;i<e-mid;i++){
        arr2[i]=arr[mid+1+i];
    }

    int i=0,j=0,k=s;
    while(i<mid-s+1 && j<e-mid){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            k++;
            i++;
        }
        else if(arr1[i]>=arr2[j]){
            arr[k]=arr2[k];
            k++;
            j++;
        }
    }

    while(i<mid-s+1){
        arr[k]=arr1[i];
        k++;
        i++;
    }

    while(j<=e-mid){
        arr[k]=arr1[j];
        k++;
        j++;
    }
    for(int i=s;i<e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[1]<<endl;   
}

void mergesort(int arr[],int s,int e){
    if(s<e){

    int mid=(s+e)/2;
    cout<<"okay";

    mergesort(arr,mid,e);        // web 1
    mergesort(arr,mid+1,e);      //web 2
    
    merge(arr,s,mid,e);          // merging of web 1 amd web 2
    
    }
}

int main (){
    int arr[]={5,4,3,2,1};
    mergesort(arr,0,4);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[0]<<endl;
    return 0;
}