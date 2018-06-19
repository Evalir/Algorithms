#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<ll> p(n);
	for(ll& i : p)
		cin >> i;
	ll ans = 0;
	ll wall = n;
	for(int i = n - 1; i >= 0; i--) {
		if (i < wall)
			++ans;
		wall = min(wall, i-p[i]);	
	}
	cout << ans << endl;
	return 0;
}