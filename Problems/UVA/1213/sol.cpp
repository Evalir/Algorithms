#include <bits/stdc++.h>
using namespace std;
using Long = long long;
bool isPrime[1250];
vector<int> primes;
//klk joa
void Sieve() {
	for(int i = 2; i <= 1200; i++) {
		if(!isPrime[i]) {
			primes.push_back(i);
			for(int j = i + i; j <= 1200; j += i) {
				isPrime[j] = true;
			}
		}
	}
}
Long dp[1150][16][192];
Long go(int pr, int k, int p) {
	if (pr == 0 && k == 0) return 1LL;
	if (k == 0) return 0;
	if (p > 190) return 0;
	if (dp[pr][k][p] != -1) return dp[pr][k][p];
	Long x, y;
	x = y = 0;
	if (pr - primes[p] >= 0)
		x = go(pr - primes[p], k - 1, p + 1);
	y = go(pr, k, p + 1);
	Long ans = x + y;
	dp[pr][k][p] = ans;
	return ans;
}

int main() {
	int n, k;
	memset(dp, -1, sizeof(dp));
	Sieve();
	while(scanf("%d %d", &n, &k) && n != 0 && k != 0) {
		printf("%lld\n", go(n,k,0));
	}
	return 0;
}