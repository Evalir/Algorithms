#include <bits/stdc++.h>
using namespace std;
int dp[50][300];
int st[50];
int sum = 0;
vector<int> k;
vector<int> readLine() {
	string s;
	getline(cin, s);
	stringstream st(s);
	vector<int> V;
	int v;
	while (st >> v) {
		V.push_back(v);
	}
	return V;
}

bool go(int p, int s) {
	if (s == 0) return true;
	if (p >= k.size()) return false;
	if (dp[p][s] != -1) return dp[p][s];
	bool x = 0;
	if (s-k[p] >= 0)
		x = go(p + 1, s-k[p]);
	bool y = go(p + 1, s);
	bool ans = x | y; 
	dp[p][s] = ans;
	return ans;
}
int main() {
	int t = readLine()[0];
	while(t--) {
		k = readLine();
		sum = accumulate(k.begin(), k.end(), 0);
		if (sum & 1) {
			puts("NO");
			continue;
		}
		else {
			memset(dp,-1,sizeof(dp));
			bool ans = go(0, sum/2);
			if (ans == true) {
				puts("YES");
				continue;
			}
			else {
				puts("NO");
				continue;
			}
		}
	}
}