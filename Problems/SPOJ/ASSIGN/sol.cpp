#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int n, tc = 0;
bool a[21][21];
Long mem[1 << 21];
bool ok[81][1 << 20];

Long dp(int mask) {
	int idx = __builtin_popcount(mask);
	if (idx >= n) {
		if (mask == (1 << n) - 1) return 1;
		return 0;
	}
	if (ok[tc][mask]) return mem[mask];
	Long ans = 0;
	for(int i = 0; i < n; i++) {
		if (a[idx][i] && !(mask & (1 << i))) ans += dp(mask | (1 << i));
	}
	return mem[mask] = ans;
}

int main() {
	int T;
	scanf("%d", &T);
	memset(ok,0,sizeof(ok));
	while(T--) {
		scanf("%d", &n);
		for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
		Long ans = dp(0);
		printf("%lld\n", ans);
		tc++;
	}
	return 0;
}

