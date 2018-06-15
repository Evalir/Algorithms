#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	vector<ll> a(n), p1(n), p2(n);
	ll acc = 0;
	for(int i = 0; i < n; i++) {
		ll x; cin >> x;
		a[i] = x;
		acc += x;
		p1[i] = acc;
	}
	sort(a.begin(), a.end());
	acc =0;
	for(int i = 0; i < n; i++) {
		acc += a[i];
		p2[i] = acc;
	}
	int q;
	cin >> q;
	while(q--) {
		int Q;
		cin >> Q;
		if (Q == 1) {
			int l,r;
			cin >> l >> r;
			--l,--r;
			if(l == 0)
				cout << p1[r] << endl;
			else
				cout << p1[r]-p1[l-1] << endl;
		}
		else {
			int l,r;
			cin >> l >> r;
			--l,--r;
			if (l == 0)
				cout << p2[r] << endl;
			else
				cout << p2[r]-p2[l-1] << endl;
		}
	}
	return 0;
}