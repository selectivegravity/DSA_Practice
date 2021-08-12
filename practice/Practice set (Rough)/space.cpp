#include<iostream>
#include<algorithm>
using namespace std;

string solve(int a[], int n) {
	sort(a, a+n);
	int count = 0;
	for (int i=0; i<n; i++) {
		if (a[i] > i+1) return "Second";
		count += (i+1) - a[i];
	}
	if(count % 2 == 0){
        cout<<"Second"<<endl;
    }
    else{
        cout<<"First"<<endl;
    }
    return;
}

int main (){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int garray[N];
        for(int i=0;i<N;i++){
            cin>>garray[i];
        }
        solve(garray,N);
    }
    return 0;
}