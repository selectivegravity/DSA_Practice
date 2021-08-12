#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    cin.ignore();
    int max_count=0,index;
    for(int i=0;i<100;i++){
        int count =0;
        for(int j=0;j<str.size();j++){
            if(str[i]==str[j]){
                count++;
            }

        }
        if(max_count<count){
            max_count=count;
            index=i;
        }
        if(str[i]=='\0'){
            break;
        }
    }
    cout<<max_count<<" "<<str[index]<<endl;
    return 0;
}