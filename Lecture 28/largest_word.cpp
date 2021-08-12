#include <iostream>
using namespace std;

int main(){
    int max_word=0,j=0;
    char arr[100],reciever[100],output_arr[100];
    for(int i=0;i<100;i++){
        if(arr[i]=='\0'){
            break;
        }
        else{
            if(arr[i] ==' '){
                if(j>max_word){
                    for(int k=0;i<j;i++){
                        output_arr[k]=reciever[k];

                    }
                    max_word=j;
                    j=0;
                }
            }
            else{
                reciever[j]=arr[i];
                j++;
            }
        }
    }

    return 0;
}