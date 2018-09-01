#include <bits/stdc++.h>
using namespace std;
//ey diache lei malisimo el problema
int main() {
	int n;
	cin >> n;
	int a = 0, b = 0;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a += x;
	}
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		b += x;
	}
	a >= b ? puts("Yes") : puts("No");
	return 0;
}