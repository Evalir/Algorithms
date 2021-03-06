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
	int l = 0, r = 0;
	int cnt = 0;
	ll sum = 0;

	while(r < n) {
		cnt++;
		sum += books[r];
		while(sum > t && l < n) {
			sum -= books[l];
			cnt--;
			l++;
		}
		ans = max(cnt,ans);
		r++;
	}
	cout << ans << endl;
	return 0;
}