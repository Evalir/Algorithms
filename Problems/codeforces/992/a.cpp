#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	set<ll> A;
	for(int i = 0; i < n; i++) {
		ll x; cin >> x;
		if (!x)
			continue;
	   	A.insert(x);
	}
	cout << (ll)A.size() << endl;
	return 0;

}