#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
int main() {
	int n, x;
	cin >> n >> x;
	int ans = 0;
	for(int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		int cnt = 0;
		while(a > 0) {
			if (a % 10 == 4 || a % 10 == 7)
				cnt++;
			a /= 10;
		}
		if (cnt <= x)
			ans++;
	}
	cout << ans << endl;
	return 0;
}