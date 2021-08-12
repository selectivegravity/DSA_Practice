// Count the number of path possible from start point to endpoint in gameboard...
#include<iostream>
using namespace std;

int countpath(int s,int e){

    if (s==e){
        return 1;
    }

    int count =0;
    for(int i=0;i<=6;i++){
        count += countpath(s+i,e);
    }
    return count;
}

int main(){
    cout<<countpath(0,4)<<endl;
    return 0;
}