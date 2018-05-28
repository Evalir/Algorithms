#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define INF 1000000009
#define MOD 1000000007
const int mod = 1000000007;
const int N = 1e7+2, M = N;

int dp[2][N];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	dp[1][0] = 1;
	for(int s = 1; s < N; s++) {
		dp[1][s] = (3LL*dp[0][s-1]%mod);
		dp[0][s] = (2LL*dp[0][s-1] + dp[1][s-1])%mod;
	}

	cout << dp[1][n] << endl;

	return 0;
}