#include <bits/stdc++.h>
using namespace std;

int calls = 0;

int solve(int n) {
	calls++;

	if (n == 1)
		return 1;
	if (n == 0)
		return 0;
	else
		return solve(n-1) + solve(n-2);
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		calls = 0;	
		int N;
		cin >> N;
		int ans = solve(N);
		cout << "fib(" << N << ") = " << calls-1 << " calls = " << ans << endl;
	}
 	return 0; 
}
