#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	int ans = 0;
	while(n--) {
		int x; cin >> x;
		t -= x;
		if (t >= 0)
			++ans;
	}
	cout << ans << endl;
	return 0;
}