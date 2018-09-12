#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	n = n*(n+1) / 2;
	(n & 1) ? puts("grimy") : puts("black");
	return 0;
}
