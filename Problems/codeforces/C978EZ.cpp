#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;
int main() {
	int n,m;
	cin >> n >> m;
	vector<ll> PS(n,0);
	ll cnt = 0;
	for(int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		cnt += x;
		PS[i] = cnt;
	}
	int lroom = 0;
	for(int i = 0; i < m; i++) {
		ll x;
		cin >> x;
		while (PS[lroom] < x)
			lroom++;
		if (lroom == 0)
			cout << lroom+1 << ' ' << x << endl;
		else
			cout << lroom+1 << ' ' << x-PS[lroom-1] << endl;
	}
	return 0;
}
