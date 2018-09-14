#include <bits/stdc++.h>
using namespace std;
using Long = long long;
Long cnt(char a, char b) {
	Long count = 0;
	if ((a == '(' || a == '?') && (b == ')' || b == '?')) count++;
	if ((a == '[' || a == '?') && (b == ']' || b == '?')) count++;
	return count;
}

Long res[510][510];
const int MOD = 1000000007;
string s;
Long dp(int l, int r) {
	if (l > r) return 0;
	if (l == r) return 1;
	if (res[l][r] != -1) return res[l][r];
	Long ans = 0;
	for(int i = l + 1; i < r; i++) {
		ans += cnt(s[l],s[i])*dp(l+1,i)*dp(i+1,r) % MOD;
	}
	res[l][r] = ans % MOD;
	res[l][r] %= MOD;
	if (res[l][r] < 0) res[l][r] += MOD;
	return res[l][r];
}

int main() {
	cin >> s;
	memset(res,-1,sizeof(res));
	Long ans = dp(0, (int)s.size());
	cout << ans << endl;
	return 0;
}

