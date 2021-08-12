#include <iostream>
using namespace std;

long long gcd(int a, int b)
{
    if(b==0)
    return a;
    
    return gcd(b, a%b);
}
long long lcm(int a, int b)
{
    return (a/gcd(a,b))*b;
}
int main() {
	// your code goes here
	int t,N1,N2;
	 cin >> t;
	
	while(t--)
	{
	 cin >> N1 >> N2;
	 cout << gcd(N1,N2) << " " <<  lcm(N1,N2) <<endl;
	}
	
	return 0;
}