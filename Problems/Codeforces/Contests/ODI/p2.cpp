#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
using namespace std;
typedef long long ll;

int main() {
	std::ios::sync_with_stdio(false);
	ll n;
	cin >> n;
	set<ll> S;
	set<ll> J;
	for(int i = 0; i < n; i++) {
		ll k;
		cin >> k;
		if (k)
			S.insert(i);
		else
			J.insert(i);
	} 
	cout << J.size() << endl;

	for(auto z : J) {
		set<ll>::iterator V = S.upper_bound(z);
		ll ans = 10000000;
		if (V == S.end()) {
			--V;
			ans = min(abs(z - *V), ans);
		}
		else
			ans = min(abs(z - *V), ans);

		if (V != S.begin()) {
			--V;
			ans = min(abs(z - *V), ans);	
		}
		
		cout << ans << "\n";
	}

	return 0;
}