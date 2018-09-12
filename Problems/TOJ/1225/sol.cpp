#include <bits/stdc++.h>
#define WHITE 1
#define RED 2
#define BLUE 3
using namespace std;
using Long = long long;
Long rem[46][4][4];
int n;
Long dp(int pos, int llc, int lc) {
	//cout << "State " << pos << ' ' << llc << ' ' << lc << endl;
	if (pos >= n) return 1LL;
	if (rem[pos][llc][lc] != -1) return rem[pos][llc][lc];
	Long w = 0;
	for(int i = 1; i <= 3; i++) {
		if (lc == BLUE && i == llc) continue;
		else if (i == lc) continue;
		else if (pos == n-1 && i == BLUE) continue;
		w += dp(pos + 1, lc, i);
	}
	return rem[pos][llc][lc] = w;
}

int main() {
	memset(rem, -1, sizeof(rem));
	cin >> n;
	Long ans = 0;
	ans += dp(2,WHITE,RED);
	ans += dp(2, RED, WHITE);
	if (n >= 3) ans += dp(2,WHITE,BLUE);
	if (n >= 3) ans += dp(2,RED,BLUE);
	//ans += dp(0,0,0,RED);
	cout << ans << endl;
	return 0;
}
