/* Given number of digits n in a number, print all n-digit numbers whose digits are strictly increasing from left to right.
Input:  n = 2
Output:  
01 02 03 04 05 06 07 08 09 12 13 14 15 16 17 18 19 23 24 25 26 27 28 
29 34 35 36 37 38 39 45 46 47 48 49 56 57 58 59 67 68 69 78 79 89 */

#include <bits/stdc++.h>
using namespace std;

void findStrictlyIncreasingNum(int start, string out, int n)
{
	if (n == 0)
	{
		cout << out << " ";
		return;
	}

	for (int i = start; i <= 9; i++)
	{
		string str = out + to_string(i);
		findStrictlyIncreasingNum(i + 1, str, n - 1);
	}
}

int main()
{
	int n = 3;
	findStrictlyIncreasingNum(0, "", n);
	return 0;
}