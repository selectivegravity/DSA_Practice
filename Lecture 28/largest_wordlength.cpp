#include <iostream> 
using namespace std; 
  
int main() 
{   int n;cin>>n;cin.ignore();
    char arr[n];
    cin.getline(arr,n);
    cin.ignore();
    int max_len=0,curr_len=0,s=0,e=0;
    
    for(int i=0;i<n;i++){

        if(arr[i]==' ' || arr[i]=='\0'){
            if(curr_len>max_len){
                max_len=curr_len;
                e=i-1;
                curr_len=0;

            }
            if(arr[i]=='\0'){
                break;
            }
            curr_len=0;
        }
        else{
            curr_len++;
        }
    }
    s=e-max_len+1;
  
    cout <<"max_len s e :: "<< max_len<<" "<<s<<" "<<e<<endl;
    for(int i=s;i<=e;i++){
        cout<<arr[i];
    }
    return 0; 
} 