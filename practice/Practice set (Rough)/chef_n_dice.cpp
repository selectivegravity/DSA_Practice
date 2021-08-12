#include<iostream>
#include <sstream>
#include<math.h>
using namespace std;

int DecimalToBinary(int n) {
   int binaryNumber[100], num=n;
   int i = 0;
   while (n > 0) {
      binaryNumber[i] = n % 2;
      n = n / 2;
      i++;
   }
   int binary=0;
   for (int j = i - 1; j >= 0; j--){
       int last=binaryNumber[j];
       binary=binary*10+last;
   }
   return binary;
}
 
// Function to convert binary to decimal
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}

void printSubsequence(string input, string output,int* idx)
{
    if (input.empty()) {
        stringstream geek(output);
        int x=-1;
        geek >> x;
        //cout<<binaryToDecimal(x)<<" "<<output<<" "<<endl;;
        idx[binaryToDecimal(x)]=1;
        return;
    }
    printSubsequence(input.substr(1), output + input[0],idx);
    printSubsequence(input.substr(1), output,idx);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        int range = pow(2,s.length())+1;
        int idx[range];
        for(int i=0;i<range;i++){
            idx[i]=-1;
        }
        printSubsequence(s,"",idx);
        for(int i=0;i<range;i++){
            if(idx[i]==-1){
                cout<<i<<"\n";
                break;
            }
            //cout<<idx[i]<<endl;
        }
    }
    return 0;
}