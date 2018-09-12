#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
	ll n, s;
	cin >> n >> s;
	vector<ll> z(n);
	for(ll &t : z) cin >> t;
	ll ans = 0;
	sort(z.begin(), z.end());
	for(int i = 0; i < n/2; i++) {
		if (z[i] > s) {
			ans += (z[i]-s);
		}
	}
	ans += abs(s-z[n/2]);
	z[n/2] = s;
	for(int i = n/2; i < n; i++) {
		if (z[i] < s) {
			ans += s-z[i];
		}
	}
	cout << ans << endl;
	return 0;
}
