#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

using ll = long long;

int main() {
	int n;
	cin >> n;
	ll ans = 0;
	while(n--) {
		ll x;
		cin >> x;
		while(!(x & 1)) {
			x /= 2;
			++ans;
		}
	}
	cout << ans << endl;
	return 0;
}