#include <bits/stdc++.h>
using namespace std;
int tz, n;
int c[400];
int dp[110][20010];
bool l1[110][20010];
int dp2[110][20010];
bool l2[110][20010];
const int INF = 1 << 30;
int go(int p, int s) {
	if (s >= tz) return s;
	if (p >= n) return INF;
	if (l1[p][s]) return dp[p][s];
	int x = go(p + 1, s + c[p]);
	int y = go(p+1, s);
	int ans = min(x,y);
	dp[p][s] = ans;
	l1[p][s] = true;
	return ans;
}

int rec(int p, int s) {
	if (s == 0) return 0;
	if (p >= n) return INF;
	if (l2[p][s]) return dp2[p][s];
	int x = INF;
	if (s - c[p] >= 0)
		x = 1 + rec(p + 1, s - c[p]);
	int y = rec(p + 1, s);
	int ans = min(x,y);
	dp2[p][s] = ans;
	l2[p][s] = true;
	return ans;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		memset(l1, 0, sizeof(l1));
		memset(l2, 0, sizeof(l2));
		scanf("%d", &tz);
		scanf("%d", &n);
		for(int i = 0; i < n; i++) scanf("%d", &c[i]);
		int ans = go(0,0);
		int am = rec(0,ans);
		printf("%d %d\n", ans, am);
	}
	return 0;
}


/*
1
1700
3
500
1000
2000

*/