#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int count (string str,char ch,int count){
    size_t found =str.find(ch);
    while(found!=string :: npos){
        count++;
        found=str.find(ch,found+1);
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string str,dustbin;
        cin>>str;
        int counter[10],ones=0,tackle=0;
        for(int i=0;i<str.length();i++){
            size_t found=dustbin.find(str[i]);
            if(found==string::npos){
                int x=count(str,str[i],0);
                if(x==1){
                    ones++;
                }
                if(x%2==0){
                    tackle=tackle+x/2;
                }
                if(x%2!=0 && x!=1){
                    tackle=tackle+(x-3)/2;
                }
                dustbin=dustbin+str[i];    
            }
        }
        if(tackle>=ones){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}