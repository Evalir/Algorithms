#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;
int main() {
	ll n,m;
	cin >> n >> m;
	vector<ll> k(m);
	for(int i = 0; i < m; i++)
		cin >> k[i];

	ll ans = k[0]-1;
	for(int i = 0; i < m-1; i++) {
		if (k[i] <= k[i+1])
			ans += k[i+1]-k[i];
		else
			ans += n-k[i]+k[i+1];
	}
	cout << ans << endl;
	return 0;
}