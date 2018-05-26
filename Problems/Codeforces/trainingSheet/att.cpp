#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
	ll n,m,k;
	cin >> n >> m >> k;

	ll h = (ceil(1.00 * n/2.0)) * 1LL;
	//cerr << h << endl;
	if (k == h) {
		cout << 0 << endl;
	}
	else if ((h-k) <= n-m) {
		cout << h-k << endl;
	}
	else
		cout << -1 << endl;
	return 0;
}