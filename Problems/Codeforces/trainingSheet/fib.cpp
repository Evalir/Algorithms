#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

ll dp[1000000];

void fib(int n) {
	dp[1] = 1;
	dp[0] = 0;
	
	for(int i = 0; i < n; i++) {
		if (n == 1) {
			cout << 0 << endl;
			return;
		}
		if (n == 2) {
			cout << 0 << ' ' << 1 << endl;
			return;
		}
		if ( i == 0)
		{
			cout << dp[0] << ' ';
			continue;
		}
		else if (i == 1) {
			cout << dp[1] << ' ';
			continue;
		}
		else {
			dp[i] += dp[i-1] + dp[i-2];
			cout << dp[i] << ' ';
		}
	}
}

int main() {
	int n;
	cin >> n;
	fib(n);
	return 0;
}