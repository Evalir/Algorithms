#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;
int main() {
	int n, k;
	cin >> n >> k;
	vector<ll> ps;
	ll acc =0;
	for(int i = 0; i < n; i++) {
		ll x; cin >> x;
		acc += x;
		ps.push_back(acc);
		//cerr << acc << endl;
	}
	ll ans = 100000000;
	ll bi = 0;
	--k;
	for(int i = 0; i <= n-k-1; i++) {
		if (i == 0) {
			if (ans > ps[i+k]) {
				ans = ps[i+k];
				bi = i;
//				cerr << ans << ' ' << bi << endl;
			}
		}
		else {
			if (ans > ps[i+k]-ps[i-1]) {
				ans = ps[i+k]-ps[i-1];
				bi = i;
//				cerr << ans << ' ' << bi << endl;
			}
		}
	}
	cout << bi+1 << endl;
	return 0;
}