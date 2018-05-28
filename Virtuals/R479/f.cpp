#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n;
	cin >> n;
	vector<ll> V;
	map<ll,int> dp;
	for(int i = 0; i < n; i++) {
		int c; cin >> c;
		V.emplace_back(c);
	}
	ll lst = 0;
	int ans = 0;
	for(int i = 0; i < n; i++) {
		int k = V[i];
		dp[k] = max(dp[k], dp[k-1]+1);
		//cerr << dp[k] << " damn lis " << endl;
		if (dp[k] > ans) {
			lst = k;
			ans = dp[k];
		}
	}
	cout << ans << endl;
	vector<ll> sol;
	for(int i = n-1; i >= 0; i--) {
		if (V[i] == lst) {
			sol.push_back(i);
			--lst;
		}
	}
	for(int i = sol.size()-1; i >= 0; i--) {
		cout << sol[i]+1 << ' ';
	}
	return 0;
	
}
