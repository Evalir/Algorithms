#include <bits/stdc++.h>
using namespace std;
using Long = long long;

Long gs(Long x) {
	Long ans = 0;
	while(x > 0) {
		ans += x % 10;
		x /= 10;
	}
	return ans;
}

int main() {
	Long n;
	cin >> n;
	Long lo = 0, hi = 1e9+10, res = -1;
	for(int i = 0; i < 100; i++) {
		Long mid = (lo + hi) / 2;
		Long sqx = mid*mid;
		Long sx = gs(mid);
		//cerr << "lo " << lo << " hi " << hi << " mid " << mid << endl;
		if (sqx + (mid*sx) - n >= 0) {
			hi = mid-1;
			res = mid;
		}
		else {
			lo = mid+1;
		}
	}
	//cout << "res " << res << endl;
	for(Long i = max(0LL, res-100000LL); i <= res + 100000LL; i++) {
		if ((i*i) + (gs(i)*i) - n == 0) {
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
