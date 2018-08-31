#include<bits/stdc++.h>
using namespace std;

int dp[50010][110];
vector<int> c;
int t,n;
int shift = 50000; //with global shift we avoid getting negatives in array
int go(int s, int p) {
	if (p >= c.size()) return s;
	if (dp[s + shift][p] != -1) return dp[s][p];
	int x = go(s + c[p], p + 1);
	int y = go(s - c[p], p + 1);
	int ans = min(abs(x),abs(y));
	dp[s + shift][p] = ans;
	return ans;
}

int main() {
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		memset(dp, -1, sizeof(dp));
		c.clear();
		c.resize(n);
		for(auto &i : c) cin >> i;
		int ans = go(50000,0);
		printf("%d\n", ans);
	}
	return 0;
}