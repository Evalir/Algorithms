#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> V(n);
	for(int& i : V)
		cin >> i;
	int ans = 1;
	int curr = 1;
	int l = 0, r = 0;
	while(l < n) {
		while(r < n && abs(V[r]-V[l]) <= 1) {
			ans = max(ans, abs(r-l));
			cerr << "curr max " << ans << " advacing r now f " << r <<  " to " << r+1 << endl;
			++r;

		}
		if (r == n)
			if (abs(V[r-1]-V[l]) <= 1)
				ans = max(ans, abs(r-l));
		cerr << "tail from " << l << " to " << l+1 << endl;
		++l;
	}
	cout << ans << endl;
	return 0;
}