#include<iostream>
using namespace std;

void problem(int N,int E,int H,int A,int B,int C){
    
    int ans=INT16_MAX;
    for(int i=N/3;i<=N;i++){
        for(int j=0;j<=i;j++){
            for(int k=0;k<=j;k++){
                if(E-2*i-k>=0 && H-3*j-k>=0 && i+j+k==N){
                    ans=min(A*i+B*j+C*k,ans);
                }
            }
        }
    }
    if(ans==INT16_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t ;
    cin>> t;
    while(t--){
    int N,E,H,A,B,C;
    cin>>N>>E>>H>>A>>B>>C;
    int N1,N2,N3;
    int a= (E-2)*(H)*(A);                  //ome
    int b= (E)*(H-3)*(B);                  //shake
    int c= (E-1)*(H-1)*(C);                //cake
    if(a>=b>=c){
        // call function (No change in function i , j, k)
    }
    if(a>=c>=b){
        // call function (in function i , k , j)
    }
    if(b>=a>=c){
        // call function (in function j , i , k)
    }
    if(b>=c>=a){
        // call function (in function j , k , i)
    }
    if(c>=a>=b){
        // call function (in function k , i , j)
    }
    if(c>=b>=a){
        // call function (in function k , j , i)
    }

    return 0;
}