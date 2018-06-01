#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n;
	cin >> n;
	map<ll, ll> costs;
	for(int i = 0; i < n; i++) {
		ll xi, ai;
		cin >> xi >> ai;
		costs[xi] = max(costs[xi], ai);
	}
	int m;
	cin >> m;
	for(int i = 0; i < m; i++) {
		ll xi, bi;
		cin >> xi >> bi;
		costs[xi] = max(costs[xi], bi);
	}

	ll ans = 0;
	for(auto x : costs) {
		ans += x.second;
	}
	cout << ans << endl;
	return 0;
}