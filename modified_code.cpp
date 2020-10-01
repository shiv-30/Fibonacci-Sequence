#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int fibRecur(int n) {
	if (n == 0 || n == 1) {
		return n;
	}
	else {
		return fibRecur(n - 1) + fibRecur(n - 2);
	}
}
int main() {
	int n;
	cin >> n;
	// Recursive code
	for (ll i = 0; i <= n; ++i) {
		cout << fibRecur(i) << " ";
	}

	cout << "\n\n";
	// Iterative Code
	int a = 0;
	int b = 1;
	if (n >= 1)
		cout << a << " ";
	if (n >= 2)
		cout << b << " ";
	int c;
	for (int i = 3; i <= n + 1; i++)
	{
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;

	}
	return 0;

}