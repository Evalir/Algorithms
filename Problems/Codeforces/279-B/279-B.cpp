#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
	ll n,t;
	cin >> n >> t;
	vector<ll> books(n);
	for(ll& i : books)
		cin >> i;

	int ans = 0;
	int l = -1, r = -1;
	int cnt = 0;
	ll sum = 0;

	while(r < n) {
		r++;
		if (r > n-1)
			break;
		cnt++;
		sum += books[r];
		//cerr << sum << ' ' << r << ' ' << cnt << " sum r cnt" << endl;
		while(sum > t && l < n) {
			l++;
			sum -= books[l];
			cnt--;
		}
		ans = max(cnt,ans);
	}
	cout << ans << endl;
	return 0;
}