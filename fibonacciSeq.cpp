#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int fibRecur(int n) {
	if(n == 0 || n == 1) {
		return n;
	}
	else {
		return fibRecur(n-1) + fibRecur(n-2);
	}
}
int main() {
	int n;
	cin >> n;
	// Recursive code
	for(ll i = 0; i <= n; ++i) {
		cout << fibRecur(i) << " ";
	}

	// Iterative Code
	return 0;

}