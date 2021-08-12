#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int solve(int a[], int k) {
	int i = 9;
	while (i >= 0 && a[i] <= k) {
		k -= a[i], i--;
	}
	return i+1;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int a[10] = {};
		for (int i=0; i<10; i++) cin >> a[i];
		int k; cin >> k;
		cout << solve(a, k) << endl;
	}
	return 0;
}