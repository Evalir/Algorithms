#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n,k;
	cin >> n >> k;
	map<ll,int> FREQ;
	vector<ll> V(n);
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		FREQ[x]++;
		V.push_back(x);
	}
	if (k == 0) {
		if (FREQ[1] > 0) {
			cout << -1 << endl;
			return 0;
		}
		else
			{
				cout << 1 << endl;
				return 0;
			}
	}
	int cnt = 0;
	for(auto x : FREQ) {
		cnt += x.second;
		if (cnt == k) {
			cout << x.first << endl;
			return 0;
		}
		else
			continue;
	}
	cout << -1 << endl;
	return 0;
}