#include <bits/stdc++.h>
using namespace std;
using pii = pair<string,int>;
int dp[1000010][10];
int ch[1000010]][10]
bool ln[1000010][10];
#define TAKE 1
#define IGNORE 2

int go(int pt, int v, vector<int> &w) {
	if (pt < 0)
		return 0;
	if (v <= 0) return 0;
	if (ln[v][pt]) return dp[v][pt];
	if (v - w[pt] < 0) return dp[v][pt] = go(pt - 1, v, w);
	if (v - w[pt] >= 0) {
		int x, y, ans;
		x = y = ans = 0;
		x += 1 + (go(pt, v - w[pt], w));
		y += (go(pt - 1, v, w));
		if (x > y) {ans = x; ch[v][pt] = pt; }
		else if (x <= y) {ans = y; ch[v][pt] = pt-1;}
		dp[v][pt] = ans;
		return ans;
	}
}

string reconstruct(int pt, int v) {
	string ans = "";
	if (ch[v][pt])
}

int main() {
		memset(ln, 0, sizeof(ln));
		int v;
		scanf("%d", &v);
		vector<int> s(9);
		for(int i = 0; i < 9; i++) {
			int sz;
			cin >> sz;
			s[i] = sz;
		}
		string ans = go(8,v,s);
		if (ans.size() > 0)
			cout << ans << endl;
		else
			puts("-1");
		return 0;
}
