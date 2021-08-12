#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    string meme="party";
    string meme2="pawri";
    cin>>s;
    for(int i=0;i<s.length()-4;i++){
        if (s[i]=='p'){
            string sub=s.substr(i,5);
            int count=0;
            for(int j=0;j<5;j++){
                if(sub[j]==meme[j]){
                    count++;
                    continue;
                }
                else{
                    break;
                }
            }
            if(count==5){
                for(int k=i;k<i+5;k++){
                    s[k]=meme2[k-i];
                }
            }
        }        
    }
    cout<<s<<endl;
    }
    return 0;
}