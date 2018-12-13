#include <bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
using ll = long long;
ll a[100010];
ll pw[100010];
ll mod = (ll)1e9+7LL;
char buf[100010];
void precompute() {
	ll p = 1;
	for(int i = 0; i <= 100000; i++) {
		pw[i] = p % mod;
		pw[i] %= mod;
		p *= 2LL;
		p %= mod;
	}
}
int main() {
	string s;
	precompute();
	while(cin >> s) {
		memset(a,0,sizeof(a));
		ll cur = 0;
		int n = s.size();
		for(int i = n - 1; i >= 0; i--) {
			if (s[i] == '1' || s[i] == '0') a[i] = cur++;
			else cur = 0;
		}
		cur = 0;
		bool active = false;
		for(int i = 0; i < n; i++) {
			if (s[i] == '1' || s[i] == '0') {
				active = true;
				if (s[i] == '1') cur += pw[a[i]] % mod;
				cur %= mod;
			} else if (active) {
				active = false;
				cout << cur % mod;
				cout << s[i];
				cur = 0;
			} else {
				cout << s[i];
			}
		}
		if (active) cout << cur % mod;
		cout << '\n';
	}
	return 0;
}
